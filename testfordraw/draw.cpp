#include "draw.h"
#include "ui_draw.h"

Draw::Draw(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Draw)
{
    ui->setupUi(this);
}

Draw::~Draw()
{
    delete ui;
}

void Draw::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
//    painter.drawLine(100,0,300,500);

    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.drawArc(30,30,200,200,0*16,350*16);
}

