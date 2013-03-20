#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <string>
#include <list>
#include <QDebug>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //heuristic comboBox init
    ui->cbHeuristic->addItem("Straight Line Distance");
    ui->cbHeuristic->addItem("Fewest Links");
}

MainWindow::~MainWindow()
{
    delete ui;
}

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

void MainWindow::on_btnBuildMap_clicked()
{
    QString qLoc = ui->lnTxtLoc->text();
    QString qConn = ui->lnTxtConn->text();
    string loc = qLoc.toStdString();
    string conn = qConn.toStdString();
   // QString test(loc.c_str());
   // qDebug() << test;
    myMap.buildMap(loc, conn);

    list<string> cities = myMap.getCities();

    for (list<string>::iterator it = cities.begin(); it != cities.end(); ++it)
    {
        string s = *it;
        QString str(s.c_str());
        qDebug() << str;
        ui->cbStartCity->addItem(str);
        ui->cbEndCity->addItem(str);
        ui->cbEndCity->addItem(str);
    }

}
