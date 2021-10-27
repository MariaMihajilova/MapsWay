#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

