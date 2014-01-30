#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUserName(QString userName)
{
    userName_ = userName.toStdString();
}

void MainWindow::setPassword(QString password)
{
    password_ = password.toStdString();
}

void MainWindow::printUserNameAndPassword()
{
    setUserName(ui->lineEdit->text());
    setPassword(ui->lineEdit_2->text());
 //   std::cout << userName_ << ":" << password_ << std::endl;
    std::string proxy = userName_ + ":" + password_ + "@proxy.matsuzon.org:8080";
    std::cout << proxy << std::endl;
 //   putenv((char*)(proxy.c_str()));
 //   std::cout << "getenv() " << getenv("http_proxy") << std::endl;
}
