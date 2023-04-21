#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(static_cast<QWidget *>(ui->textEdit));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionOpen_triggered()
{
    //这段代码用QFileDialog::getOpenFileName打开一个对话框，让用户选择要打开的文件。其中，第一个参数是指定对话框的父窗口；
    //第二个参数是对话框的标题；第三个参数是指定对话框的初始路径；第四个参数是指定要显示的文件类型及对应的过滤器。
    //获取打开的文件的名字
    QString fileName = QFileDialog::getOpenFileName(this, tr("打开文件"), "/", tr("文本文件 (*.txt);;所有文件 (*.*)"));
    QFile file(fileName);
    currentFile = fileName;
    if(!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this,"warning","Cannot open file : "+file.errorString());
        return;
    }
    setWindowTitle(fileName);
    //text作为in的输入源
    QTextStream in(&file);
    QString text = in.readAll();
    //将文件内容显示在窗体中
    ui->textEdit->setText(text);
    //关闭文件
    file.close();
}

void MainWindow::on_actionSave_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,"save as");
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this,"warning","Cannot save file : "+file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

void MainWindow::on_actionPrint_triggered()
{
    //打开了打印机的页面
    QPrinter printer;
    printer.setPrinterName("Printer Name");
    QPrintDialog pDialog(&printer,this);
    if(pDialog.exec() == QDialog::Rejected) {
        QMessageBox::warning(this,"Warning","Cannot Access printer");
        return;
    }
    ui->textEdit->print(&printer);
}

void MainWindow::on_actionExit_triggered()
{
    //相当于把那个窗体给x了
    QApplication::quit();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}
