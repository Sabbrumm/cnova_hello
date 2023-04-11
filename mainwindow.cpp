#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_btnHello_clicked()
{
    QMessageBox msgbox;
    QString fio;
    if (!(ui->FIOInput->text().isEmpty())){
        msgbox.setWindowTitle("Рад встрече!");
        fio.append("Привет, ");
        fio.append(ui->FIOInput->text());
        fio.append("!");
    }
    else{
        msgbox.setWindowTitle("Таинственный незнакомец!");
        fio.append("Прости, я не знаю твоего имени...\nНе мог бы ты его для меня ввести?");
    }


    msgbox.setText(fio);
    msgbox.exec();
    fio.clear();
}
