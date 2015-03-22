#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QRadioButton>



class MainWindow : public QDialog
{
    Q_OBJECT

public:
     MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void slotSetSign();
private:
    QLabel *lbl;
    QLabel *lbl2;
    QPushButton *ok;
    QLabel *result;
    QRadioButton *rb1;
    QRadioButton *rb2;
    QRadioButton *rb3;
    QRadioButton *rb4;

};

#endif // MAINWINDOW_H
