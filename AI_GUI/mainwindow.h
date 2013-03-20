#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    QString openFile();
};

#endif // MAINWINDOW_H
