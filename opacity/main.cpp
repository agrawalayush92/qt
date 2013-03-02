#include <QApplication>
#include "widget.h"
#include <QSlider>
#include <QHBoxLayout>
#include <QPainter>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSlider *slide=new QSlider(Qt::Horizontal);
    widget wid;
    QHBoxLayout *lay=new QHBoxLayout;
    slide->setMaximum(10);
    slide->setMinimum(1);
    slide->setValue(8);
    wid.setval(10);
    lay->addWidget(slide);
    wid.setLayout(lay);
    QObject::connect(slide,SIGNAL(valueChanged(int)),&wid,SLOT(setval(int)));
    wid.show();
    return a.exec();
}
