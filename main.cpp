#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.AddText("QTEST FAILLJASE LASDF ALSFKAL AS DFAWIEURO");
    w.show();

    return a.exec();
}
