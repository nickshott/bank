#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secdialog.h"
#include<QFile>
#include<QTextStream>
#include<thirddialog.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_register_clicked();




private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;
    ThirdDialog *thirdDialog;


};
#endif // MAINWINDOW_H
