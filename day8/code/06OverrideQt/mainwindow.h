#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>

class MainWindow : public QMainWindow  // MainWindow  QMainWindow  QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    virtual void mousePressEvent(QMouseEvent * e);
};

#endif // MAINWINDOW_H
