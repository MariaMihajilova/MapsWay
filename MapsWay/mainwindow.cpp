#include <QWheelEvent>
#include <QMouseEvent>
#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"

const int toolBarHeight = 45;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scaleBar = new QSlider;
    scaleBar->setOrientation(Qt::Horizontal);
    scaleBar->setMinimum(100); scaleBar->setMaximum(250); scaleBar->setValue(100);
    connect(scaleBar, SIGNAL(valueChanged(int)), this, SLOT(on_scaleBar_valueChanged(int)));

    ui->statusBar->addWidget(scaleBar, 0);

    this->rectMap = ui->map->geometry();
    this->rectBounds = this->geometry();
    this->rectBounds.setHeight(rectBounds.height() -
                               toolBarHeight);
    scale = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()         // відкриття вікна Пошук маршруту
{
    window = new RouteSearch(this);
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
        emit moveSignal(event->pos() - pointStart, this->geometry());
        temp = QPoint(ui->map->geometry().x() - temp.x(),
                      ui->map->geometry().y()- temp.y());
        emit moveSignal(temp);
        pointStart = event->pos();
    }
}

void MainWindow::on_scaleBar_valueChanged(int value)
{
    scale = (float)value / 100;
    QPoint tempSize(ui->map->geometry().width(), ui->map->geometry().height());
    emit scaleChanged(scale);
    QPoint vec((tempSize.x() - ui->map->geometry().width()) / 2, (tempSize.y() - ui->map->geometry().height()) / 2);
    emit moveSignal(vec, this->geometry());
    emit moveSignal(QPoint(ui->map->geometry().x(),
                           ui->map->geometry().y()));

}

