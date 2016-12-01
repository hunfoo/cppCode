#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),btn(new QPushButton)
{
    this->setGeometry(300,300,500,300);

    btn->setParent(this);
    btn->setGeometry(50,30,50,30);
    connect(btn,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{

}
