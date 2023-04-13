#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QTime>
#include <QRandomGenerator>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QTimer *timer1;
    QRandomGenerator rng;
    int rand_num;

    //用来显示控件触发之后的效果的
private slots:
    void myfunc1();
    void on_pushButton_clicked();
};
#endif // WIDGET_H
