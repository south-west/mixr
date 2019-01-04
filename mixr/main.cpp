#include "playsong.h"

#include <QApplication>
#include <QVideoWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PlaySong w;
    w.show();

    return a.exec();
}
