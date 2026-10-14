#include "byterconverter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ByterConverter w;
    w.setWindowTitle("數字進制轉換器");
    w.show();
    return QApplication::exec();
}
