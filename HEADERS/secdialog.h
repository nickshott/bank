#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include<QFile>
#include<QTextStream>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SecDialog *ui;


};

#endif // SECDIALOG_H
