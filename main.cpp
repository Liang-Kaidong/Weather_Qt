#include "weather.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //qputenv("QT_IM_MODULE", QByteArray("Qt5Input"));  /* 该行代码是为了让开发板使用虚拟键盘，如无必要请不要取消注释 */
    QApplication a(argc, argv);
    Weather w;
    w.show();
    return a.exec();
}
