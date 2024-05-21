#include "button.h"
#include <QPushButton>

Button::Button(QWidget *parent, QString text, QString text_align, QString padding, int weight, int height, int radius,
               QString bcolor, QString fcolor)
    : QPushButton(parent)
{
    QString style = padding + "; text-align:" + text_align + "; border-radius:%1px; background-color: " + bcolor + "; color: " + fcolor ;
    setFixedSize(weight,height);

    setStyleSheet(style.arg(radius));
    setText(text);

}

Button::~Button(){}
