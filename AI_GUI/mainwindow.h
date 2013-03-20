#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Map.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    


private slots:
    void on_btnSelectLoc_clicked();

    void on_btnSelectConn_clicked();

    void on_btnBuildMap_clicked();

private:
    Ui::MainWindow *ui;
    QString openFile();
    Map myMap;


};

#endif // MAINWINDOW_H
