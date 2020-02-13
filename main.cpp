#include "zcm_player.h"

// Qt
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ZCM_player w;
    w.show();
    return a.exec();
}
