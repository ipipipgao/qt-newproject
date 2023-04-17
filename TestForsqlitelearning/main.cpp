#include "sqlitelearning.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SqliteLearning w;
    w.show();
    return a.exec();
}
