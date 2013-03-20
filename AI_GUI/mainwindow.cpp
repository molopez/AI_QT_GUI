#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


/*void MainWindow::openFile(const QString &path)
{
    QString fileName = path;

    if (fileName.isNull())
        fileName = QFileDialog::getOpenFileName(this,
            tr("Open File"), "", "C++ Files (*.cpp *.h)");

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QFile::ReadOnly | QFile::Text))
            editor->setPlainText(file.readAll());

    }*/

QString MainWindow::openFile()
{
    QString fileName;

    return fileName = QFileDialog::getOpenFileName(this,
            tr("Open File"), "", "Text Files (*.txt)");

}


void MainWindow::on_btnSelectLoc_clicked()
{
    QString path = openFile();

    ui->lnTxtLoc->setText(path);

}

void MainWindow::on_btnSelectConn_clicked()
{
    QString path = openFile();

    ui->lnTxtConn->setText(path);
}
