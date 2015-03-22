#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QDialog (parent)
{
    lbl=new QLabel ("<h2>Предалагаем Вам пройти "
                    "самый короткий тест "
                    "на определение личности</h2>");
    lbl->setStyleSheet("color:#8B7D6B");
    lbl->setFixedSize(800,100);
    lbl->setAlignment(Qt::AlignCenter);
    lbl2 = new QLabel ("<h4>Чтобы узнать черты своей личности, определите, что вам больше нравится: 1) огурец или помидор? 2) арбуз или дыня?</h4>");
    lbl2->setStyleSheet("color:#4F4F4F");
    rb1 = new QRadioButton("Помидор и дыня");
    rb1->setStyleSheet("color:#4F4F4F");
    rb2 = new QRadioButton("Огурец и арбуз");
    rb2->setStyleSheet("color:#4F4F4F");
    rb3 = new QRadioButton("Помидор и арбуз");
    rb3->setStyleSheet("color:#4F4F4F");
    rb4 = new QRadioButton("Огурец и дыня");
    rb4->setStyleSheet("color:#4F4F4F");
    ok = new QPushButton ("Узнать");
    ok->setStyleSheet("background-color:#EEDFCC");
    result = new QLabel;
    result->setFixedSize(800,270);
    result->setAlignment(Qt::AlignCenter);





    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(lbl2);
    QVBoxLayout *check = new QVBoxLayout;
    check->addWidget(rb1);
    check->addWidget(rb2);
    check->addWidget(rb3);
    check->addWidget(rb4);
    QVBoxLayout *main = new QVBoxLayout;
    main->addLayout(layout);
    main->addLayout(check);
    main->addWidget(ok);
    main->addWidget(result);

    connect(ok, SIGNAL(clicked()), this, SLOT(slotSetSign()));
    setLayout(main);


}

MainWindow::~MainWindow(){}
void MainWindow::slotSetSign(){
    if (rb1->isChecked())
    {
        QPixmap pixmap("1.jpg");
        result->setPixmap(pixmap);
    }
    if (rb2->isChecked())
    {
        QPixmap pixmap("2.jpg");
        result->setPixmap(pixmap);
    }
    if (rb3->isChecked())
    {
        QPixmap pixmap("3.jpg");
        result->setPixmap(pixmap);
    }
    if (rb4->isChecked())
    {
        QPixmap pixmap("4.jpg");
        result->setPixmap(pixmap);
    }


}

