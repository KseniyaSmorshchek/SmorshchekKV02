#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QSlider>
#include <QSpinBox>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>



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
    QSlider *sl;
    QSpinBox *sb;
    QSlider *sl2;
    QSpinBox *sb2;
    QPushButton *ok;
    QLabel *result;

};

#endif // MAINWINDOW_H
