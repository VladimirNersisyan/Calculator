#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QGridLayout>
#include <button.h>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QGridLayout* lay1 = new QGridLayout();

    QLineEdit* monitor = new QLineEdit("0");
    monitor->setFixedSize(220,70);
    monitor->setStyleSheet("QLineEdit{border:1px solid black; color:white}");
    monitor->setAlignment(Qt::AlignRight);
    lay1->addWidget(monitor,0,0,1,0);

    QFont font;
    font.setPointSize(36);
    monitor->setFont(font);

    QFont font2;
    font2.setPointSize(16);

    QWidget* calc = new QWidget;
    calc->setStyleSheet("QWidget{background-color:black}");
    calc->setLayout(lay1);
    calc->setFixedSize(250,430);

    QString mylist[5][4] = {
        {"AC","+/-","%","/"},
        {"7","8","9","x"},
        {"4","5","6","-"},
        {"1","2","3","+"},
        {"0","",",","="}};

int height = 50, weight = 50, radius = 25, rspan = 1, cspan = 1;
QString text_align = "center", padding = "", bcolor = "gray", fcolor = "white";

for(int i = 0; i < 5; ++i ){
    for(int  j = 0; j < 4; ++j){

        if(mylist[i][j] == "0"){
            padding = "padding-left:20";
            text_align = "left";
            height = 100;
            cspan = 2;
        }
        else{
            padding = "";
            text_align = "center";
            height = 50;
            cspan = 1;
        }
        if(j == 3){
            bcolor = "#F2A33C";
            fcolor = "#FFFFFF";
        }
        else if(i == 0){
            bcolor = "#A5A5A5";
            fcolor = "#000000";
        }
        else {
            bcolor = "#333333";
            fcolor = "#FFFFFF";
        }
        Button* button = new Button(0, mylist[i][j], text_align, padding, height, weight, radius, bcolor, fcolor);

        if(mylist[i][j] == ""){
            button->setVisible(false);
        }
        button->setFont(font2);
        lay1->addWidget(button,i+1,j,rspan,cspan);
    }
}

    w.setFixedSize(250,450);
    w.setCentralWidget(calc);
    w.show();
    return a.exec();
}
