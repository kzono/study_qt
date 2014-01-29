#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void printUserNameAndPassword();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    std::string userName_;
    std::string password_;
    void setUserName(QString userName);
    void setPassword(QString password);
};

#endif // MAINWINDOW_H
