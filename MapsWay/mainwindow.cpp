#include <QWheelEvent>
#include <QMouseEvent>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scaleBar = new QSlider;
    scaleBar->setOrientation(Qt::Horizontal);
    scaleBar->setMinimum(100); scaleBar->setMaximum(250); scaleBar->setValue(100);
    connect(scaleBar, SIGNAL(valueChanged(int)), this, SLOT(scaleBar_valueChanged(int)));

    ui->statusBar->addWidget(scaleBar, 0);

    this->rectMap = ui->map->geometry();
    this->rectBounds = this->geometry();
    this->rectBounds.setHeight(rectBounds.height() - 45);
    scale = 1;

    this->showRoute = nullptr;

    emit initialization();
}

MainWindow::~MainWindow()
{
    delete ui;
}

#include <QDebug>
void MainWindow::on_action_triggered()         // відкриття вікна Пошук маршруту
{
    //*//
    window = new RouteSearch(this->centralWidget(), scale, QPoint(ui->map->geometry().x(), ui->map->geometry().y()), showRoute);
    window->show();
}


void MainWindow::on_action_2_triggered()       // відкриття вікна Пошук зупинки
{
    window2 = new BusStopSearch(this);
    window2->show();
}


void MainWindow::on_action_3_triggered()      // відкриття вікна Будування маршруту
{
    window3 = new RouteConstruction(this);
    window3->show();
}


void MainWindow::on_action_4_triggered()      // відкриття вікна Правила дорожнього руху

{
    window4 = new TrafficRules(this);
    window4->show();
}


void MainWindow::on_action_5_triggered()      // розрахунок трафіку

{

}

void MainWindow::wheelEvent(QWheelEvent *event){
    scaleBar->setSliderPosition(scaleBar->sliderPosition() + event->angleDelta().y()/120);
    pointWheel = event->pos();
}

void MainWindow::mousePressEvent(QMouseEvent *event){
    if (event->button() == Qt::RightButton){
        pointStart = event->pos();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event){
    if (event->buttons() == Qt::RightButton){
        QPoint temp(ui->map->geometry().x(), ui->map->geometry().y());
        emit moveSignal(event->pos() - pointStart, this->rectBounds);
        temp = QPoint(ui->map->geometry().x() - temp.x(),
                      ui->map->geometry().y()- temp.y());
        emit moveSignal(temp);
        emit offset( QPoint(ui->map->geometry().x(), ui->map->geometry().y()));
        pointStart = event->pos();
    }
}

void MainWindow::scaleBar_valueChanged(int value)
{
    scale = (float)value / 100;
    QPoint tempSize(ui->map->geometry().width(), ui->map->geometry().height());
    emit scaleChanged(scale);
    QPoint vec((tempSize.x() - ui->map->geometry().width()) / 2, (tempSize.y() - ui->map->geometry().height()) / 2);
    emit moveSignal(vec, this->rectBounds);
    emit moveSignal(QPoint(ui->map->geometry().x(),
                           ui->map->geometry().y()));
    emit offset( QPoint(ui->map->geometry().x(), ui->map->geometry().y()));

}

