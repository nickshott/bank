#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
#include<QPixmap>
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


void MainWindow::on_pushButton_clicked()
{

    QString numbcar=ui->lineEdit_user->text();

    QString pasword=ui->lineEdit_pasw->text();
    QString data=numbcar+pasword;
    //buscar en txt de basse de datos de clientes user & pasw
    //database debe ser un qstring o container
   // bool belong=/*database.contains(numbcar+pasword)*/;
    //belong==true
    if(numbcar=="123" &&pasword=="test"){
        QMessageBox::information(this,"Login","User and Pasw are correct");


        thirdDialog=new ThirdDialog(this);
        thirdDialog->show();


    }else{
         QMessageBox::warning(this, "Login","User and Pasw are'nt correct");
    }
    ui->lineEdit_user->clear();
    ui->lineEdit_pasw->clear();
}

void MainWindow::on_pushButton_register_clicked()
{

    secDialog=new SecDialog(this);
    secDialog->show();

}
