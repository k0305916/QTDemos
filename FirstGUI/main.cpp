#include "mainwindow.h"
#include <QApplication>
#include <ActiveQt/QAxObject>
//#include <ActiveQt/QAxBase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QAxObject obj;
    obj.setControl("E:/Business/Study_C/MFCApplication1/MFCApplication1/OCX/ZOLIXMC6002.ocx");


    auto comport = obj.property("ComPort").toInt();
    auto result = obj.setProperty("ComPort", 5);
    comport = obj.property("ComPort").toInt();
//    auto result = obj.dynamicCall("Connect()").toBool();
//    auto count = obj.dynamicCall("SearchZolixUSBDevice()").toInt();
    return a.exec();
}
