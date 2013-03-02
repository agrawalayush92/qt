#include <QApplication>
#include "mainwindow.h"
#include <QGridLayout>
#include <QPushButton>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGridLayout *lay=new QGridLayout;
    QPushButton *but1=new QPushButton;
    QPushButton *but2=new QPushButton;
    QPushButton *but3=new QPushButton;
    QPushButton *but4=new QPushButton;
    lay->addWidget(but1,0,0);
    lay->addWidget(but2,0,1);
    lay->addWidget(but3,1,0);
    lay->addWidget(but4,1,1);


    QWidget *wid = new QWidget;
    wid->setLayout(lay);
    wid->show();

    return a.exec();
}
