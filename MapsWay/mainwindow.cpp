#include <QWheelEvent>
#include <QMouseEvent>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // динамічне створення полоси зміни маштабу інтерфейсу
    scaleBar = new QSlider;
    scaleBar->setOrientation(Qt::Horizontal);
    scaleBar->setMinimum(100); scaleBar->setMaximum(250); scaleBar->setValue(100);
    // зєднання сигналу зміни положення повзунка на слайдері з відповідним слотом
    connect(scaleBar, SIGNAL(valueChanged(int)), this, SLOT(scaleBar_valueChanged(int)));

    // додання слайдера в нижню область інформації
    ui->statusBar->addWidget(scaleBar, 0);

    // ініціалізація змінних
    this->rectMap = ui->map->geometry();
    this->rectBounds = this->geometry();
    this->rectBounds.setHeight(rectBounds.height() - 45);
    scale = 1;

    this->showRoute = nullptr;

    // створення будувальника маршруту
    path = new PathBuilder(this->centralWidget());
    path->setGeometry(this->geometry());
    // розміщення слоїв так щоб дані не закривались
    path->lower();
    ui->map->lower();

    // ініціалізація вікон
    routeSearch = new RouteSearch(this->centralWidget(), scale, QPoint(ui->map->geometry().x(), ui->map->geometry().y()), showRoute);
    stopSearch = new BusStopSearch(this);
    routeConst = new RouteConstruction(this);
    rules = new TrafficRules(this);
    aboutForm = new About(this);
    helpForm = new Help(this);

    // ініціалізація міток на карті
    emit initialization();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scaleBar;
    delete path;
    delete routeSearch;
    delete stopSearch;
    delete routeConst;
    delete rules;
    delete aboutForm;
    delete helpForm;
}

void MainWindow::on_action_triggered()         // відкриття вікна Пошук маршруту
{
    routeSearch->show();
}


void MainWindow::on_action_2_triggered()       // відкриття вікна Пошук зупинки
{
    stopSearch->show();
}


void MainWindow::on_action_3_triggered()      // відкриття вікна Будування маршруту
{
    connect(routeConst, SIGNAL(visibleChanged(bool)), path, SLOT(visibleChanged(bool)));
    connect(routeConst, SIGNAL(newPath(int,int)), path, SLOT(newPath(int,int)));
    routeConst->show();
}

void MainWindow::on_action_5_triggered()      // відкриття вікна з інструкцією
{
    helpForm->show();
}


void MainWindow::on_action_6_triggered()     // відкриття вікна з інформацією про розробників
{
    aboutForm->show();
}


void MainWindow::on_action_7_triggered()     // відкриття вікна Правила дорожнього руху
{
    rules->show();
}

void MainWindow::wheelEvent(QWheelEvent *event){
    // зміна позиції повзунка коли користувач крутить коліщатко мищі
    scaleBar->setSliderPosition(scaleBar->sliderPosition() + event->angleDelta().y()/120);
}

void MainWindow::mousePressEvent(QMouseEvent *event){
    if (event->button() == Qt::RightButton){
        // ініціалізація стартової позиції вектора переміщення
        pointStart = event->pos();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event){
    if (event->buttons() == Qt::RightButton){
        QPoint temp(ui->map->geometry().x(), ui->map->geometry().y());
        // сигнал на переміщення карти
        emit moveSignal(event->pos() - pointStart, this->rectBounds);
        temp = QPoint(ui->map->geometry().x() - temp.x(),
                      ui->map->geometry().y()- temp.y());
        // сигнал на переміщення маркерів
        emit moveSignal(temp);
        // новлення даних про поточне зміщення інтерфейсу
        emit offset( QPoint(ui->map->geometry().x(), ui->map->geometry().y()));
        pointStart = event->pos();
    }
}

void MainWindow::scaleBar_valueChanged(int value)
{
    // оновлення маштабу
    scale = (float)value / 100;
    QPoint tempSize(ui->map->geometry().width(), ui->map->geometry().height());
    // сигнал зміни маштабу
    emit scaleChanged(scale);
    // переміщення області збільшення у центр вікна
    QPoint vec((tempSize.x() - ui->map->geometry().width()) / 2, (tempSize.y() - ui->map->geometry().height()) / 2);
    emit moveSignal(vec, this->rectBounds);
    emit moveSignal(QPoint(ui->map->geometry().x(),
                           ui->map->geometry().y()));
    // оновлення даних про зміщення
    emit offset( QPoint(ui->map->geometry().x(),
                        ui->map->geometry().y()));

}
