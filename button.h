#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>

class Button : public QPushButton{
public:
    Button(QWidget *parent = 0, QString text = "", QString text_align = "center", QString padding = "", int weight = 30, int height = 30, int radius = 25, QString bcolor = "gray", QString fcolor = "white");
    ~Button();
};

#endif // BUTTON_H
