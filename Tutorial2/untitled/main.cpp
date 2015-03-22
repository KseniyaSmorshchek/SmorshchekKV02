#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *window = new MainWindow;
    window->setStyleSheet("background-color : #FFF5EE");
    window->show();
    window->setFixedSize(800,650);


    return a.exec();
}
