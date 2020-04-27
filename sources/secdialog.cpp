#include "secdialog.h"
#include "ui_secdialog.h"
#include <QFile>
#include <QTextStream>
#include "mainwindow.h"

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
{

    QFile archivo("DATABASE1.txt");
    QString name=ui->lineEdit_name->text();
    QString numbcar=ui->lineEdit_name->text();
    QString age=ui->lineEdit_age->text();
    QString pasword=ui->lineEdit_pasw->text();
    QString data=numbcar+pasword;
    int n = pasword.size();
    if( n==4 )
    {
         archivo.open(QIODevice::WriteOnly | QIODevice::Truncate);
         QTextStream text(&archivo);
         text<<data;
         archivo.close();


     }else{

    }
    ui->lineEdit_name->clear();
    ui->lineEdit_name->clear();
    ui->lineEdit_age->clear();
    ui->lineEdit_cc->clear();
    ui->lineEdit_lastname->clear();
    ui->lineEdit_pasw->clear();

}

void SecDialog::on_pushButton_2_clicked()
{
    hide();
   /* umain=new MainWindow(this);
    umain->show();*/


}
