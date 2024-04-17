#include "win.h"

#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication *app = new QApplication(argc, argv);
    Win win(0);
    win.show();
    return app->exec();
}
