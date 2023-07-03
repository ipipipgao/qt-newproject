#ifndef ADDPACKAGE_H
#define ADDPACKAGE_H

#include <QDialog>
#include <QDebug>
//下面的TryAgain.h放在addpackage源文件也行，之不过放到头文件代码风格更好，更正规，因为头文件才是放头文件的地方
#include <TryAgain.h>

namespace Ui {
class AddPackage;
}

class AddPackage : public QDialog
{
    Q_OBJECT

public:
    explicit AddPackage(QWidget *parent = nullptr);
    ~AddPackage();

private slots:
    void on_btnSave_clicked();

    void on_btnReset_clicked();

private:
    Ui::AddPackage *ui;
};

#endif // ADDPACKAGE_H
