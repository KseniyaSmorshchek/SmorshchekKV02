#include "mainwindow.h"
#include <QPicture>

MainWindow::MainWindow(QWidget *parent) : QDialog (parent)
{

    lbl=new QLabel ("<h2>УЗНАЙТЕ СВОЙ ЗНАК ГОРОСКОПА</h2>");
    lbl->setStyleSheet("color:#8B7D6B");
    lbl->setAlignment(Qt::AlignCenter);
    lbl2=new QLabel ("Введите день и месяц вашего рождения:");
    lbl2->setStyleSheet("color:#4F4F4F");
    sl=new QSlider;
    sb=new QSpinBox;
    sb->setStyleSheet("background-color:#FFFFF0");
    sl2=new QSlider;
    sb2=new QSpinBox;
    sb2->setStyleSheet("background-color:#FFFFF0");
    ok=new QPushButton ("Узнайте");
    ok->setStyleSheet("background-color:#EEDFCC");

    result=new QLabel;
    result->setFixedSize(400,150);
    result->setAlignment(Qt::AlignCenter);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(lbl2);
    layout->addWidget(sl);
    layout->addWidget(sb);
    layout->addWidget(sl2);
    layout->addWidget(sb2);
    QVBoxLayout *main = new QVBoxLayout;
    main->addWidget(lbl);
    main->addLayout(layout);
    main->addWidget(ok);
    main->addWidget(result);

    sb->setMaximum(31);
    sl->setMaximum(31);
    sb->setMinimum(1);
    sl->setMinimum(1);
    sb2->setMaximum(12);
    sl2->setMaximum(12);
    sb2->setMinimum(1);
    sl2->setMinimum(1);


    connect(sb, SIGNAL(valueChanged(int)),sl,SLOT(setValue(int)));
    connect(sl, SIGNAL(valueChanged(int)),sb,SLOT(setValue(int)));\
    connect(sb2, SIGNAL(valueChanged(int)),sl2,SLOT(setValue(int)));
    connect(sl2, SIGNAL(valueChanged(int)),sb2,SLOT(setValue(int)));

    connect(ok, SIGNAL(clicked()), this, SLOT(slotSetSign()));

    setLayout(main);
}
MainWindow::~MainWindow(){}
void MainWindow::slotSetSign(){
    int day = sb->text().toInt();
    int month = sb2->text().toInt();
    if( (day>=21&&month==3) || (month==4&&day<=20)) {
        QPixmap pixmap("1.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=21&&month==4) || (month==5&&day<=20)) {
        QPixmap pixmap("2.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=21&&month==5) || (month==6&&day<=21)) {
        QPixmap pixmap("3.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=22&&month==6) || (month==7&&day<=22)) {
        QPixmap pixmap("4.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=23&&month==7) || (month==8&&day<=23)) {
        QPixmap pixmap("5.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=24&&month==8) || (month==9&&day<=23)) {
        QPixmap pixmap("6.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=24&&month==9) || (month==10&&day<=23)) {
        QPixmap pixmap("7.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=24&&month==10) || (month==11&&day<=22)) {
        QPixmap pixmap("8.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=23&&month==11) || (month==12&&day<=21)) {
        QPixmap pixmap("9.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=22&&month==19) || (month==1&&day<=20)) {
        QPixmap pixmap("10.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=21&&month==1) || (month==2&&day<=20)) {
        QPixmap pixmap("11.jpg");
        result->setPixmap(pixmap);
    }
    if( (day>=21&&month==2) || (month==3&&day<=20)) {
        QPixmap pixmap("12.jpg");
        result->setPixmap(pixmap);
    }

}
