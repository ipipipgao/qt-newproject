#ifndef TEST_H
#define TEST_H
//只要放在头文件就是全局变量
#include <QWidget>
#include <QTimer>
#include <QDebug>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class test; }
QT_END_NAMESPACE

class test : public QWidget
{
    Q_OBJECT

public:
    test(QWidget *parent = nullptr);
    ~test();
private:
    Ui::test *ui;
    QTimer *timer1;

private slots:
    void daojishi();
};
#endif // TEST_H
