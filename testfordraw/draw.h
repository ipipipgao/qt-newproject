#ifndef DRAW_H
#define DRAW_H

#include <QWidget>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class Draw; }
QT_END_NAMESPACE

class Draw : public QWidget
{
    Q_OBJECT

public:
    Draw(QWidget *parent = nullptr);
    ~Draw();

private:
    Ui::Draw *ui;
    void paintEvent(QPaintEvent *event);
};
#endif // DRAW_H
