#include "desktoppet.h"

#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    //解决汉子乱码问题
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QApplication a(argc, argv);
    DesktopPet w;
    w.show();
    return a.exec();
}
