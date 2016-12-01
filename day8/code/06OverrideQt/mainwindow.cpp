#include "mainwindow.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(300,300,500,300);
}

MainWindow::~MainWindow()
{

}


void MainWindow::mousePressEvent(QMouseEvent * e)
{
    if(e->button() == Qt::LeftButton)
    {
        cout<<e->pos().rx()<<"\t"<<e->pos().ry()<<endl;
        cout<<e->globalX()<<"\t"<<e->globalY()<<endl;
    }
}
