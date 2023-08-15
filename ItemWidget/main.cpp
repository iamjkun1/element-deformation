#include "mainwidget.h"

#include <QApplication>

//设计界面，实现蝴蝶的各种变形
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    w.show();
    return a.exec();
}
