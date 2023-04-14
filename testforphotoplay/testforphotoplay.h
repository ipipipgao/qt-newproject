#ifndef TESTFORPHOTOPLAY_H
#define TESTFORPHOTOPLAY_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QTimer>

class testforphotoplay : public QWidget
{
    Q_OBJECT

public:
    testforphotoplay(QWidget *parent = nullptr);
    ~testforphotoplay();

private:
    QLabel lblimg;
    QPixmap *pm;
    QTimer *timer1;
    int num=1;

    //1.slot加s  2.函数名前加void   3.函数像c++加括号  4.slots后面加上：
private slots:
    void myfunc1();
};
#endif // TESTFORPHOTOPLAY_H
