#include "widget.h"

widget::widget(QWidget *parent):QWidget(parent)
{

}

void widget::setval(int a)
{
    double x;
    x=(double)a;
    this->setWindowOpacity((x/10));
}
