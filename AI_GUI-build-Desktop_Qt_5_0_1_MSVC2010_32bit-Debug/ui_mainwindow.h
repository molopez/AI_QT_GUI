/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblConn;
    QLabel *lblLoc;
    QLineEdit *lnTxtLoc;
    QLineEdit *lnTxtConn;
    QPushButton *btnSelectLoc;
    QPushButton *btnSelectConn;
    QPushButton *btnBuildMap;
    QComboBox *cbStartCity;
    QComboBox *cbEndCity;
    QComboBox *cbOmitCity;
    QComboBox *cbHeuristic;
    QLabel *lblHeuristic;
    QLabel *lblSelectCities;
    QPushButton *btnFindPath;
    QPlainTextEdit *txtboxDispalyPath;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(988, 577);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblConn = new QLabel(centralWidget);
        lblConn->setObjectName(QStringLiteral("lblConn"));
        lblConn->setGeometry(QRect(20, 50, 111, 16));
        lblLoc = new QLabel(centralWidget);
        lblLoc->setObjectName(QStringLiteral("lblLoc"));
        lblLoc->setGeometry(QRect(20, 10, 101, 16));
        lnTxtLoc = new QLineEdit(centralWidget);
        lnTxtLoc->setObjectName(QStringLiteral("lnTxtLoc"));
        lnTxtLoc->setGeometry(QRect(140, 10, 161, 20));
        lnTxtConn = new QLineEdit(centralWidget);
        lnTxtConn->setObjectName(QStringLiteral("lnTxtConn"));
        lnTxtConn->setGeometry(QRect(140, 50, 161, 20));
        btnSelectLoc = new QPushButton(centralWidget);
        btnSelectLoc->setObjectName(QStringLiteral("btnSelectLoc"));
        btnSelectLoc->setGeometry(QRect(320, 10, 61, 23));
        btnSelectConn = new QPushButton(centralWidget);
        btnSelectConn->setObjectName(QStringLiteral("btnSelectConn"));
        btnSelectConn->setGeometry(QRect(320, 50, 61, 23));
        btnBuildMap = new QPushButton(centralWidget);
        btnBuildMap->setObjectName(QStringLiteral("btnBuildMap"));
        btnBuildMap->setGeometry(QRect(20, 90, 75, 23));
        cbStartCity = new QComboBox(centralWidget);
        cbStartCity->setObjectName(QStringLiteral("cbStartCity"));
        cbStartCity->setGeometry(QRect(510, 50, 69, 22));
        cbEndCity = new QComboBox(centralWidget);
        cbEndCity->setObjectName(QStringLiteral("cbEndCity"));
        cbEndCity->setGeometry(QRect(600, 50, 69, 22));
        cbOmitCity = new QComboBox(centralWidget);
        cbOmitCity->setObjectName(QStringLiteral("cbOmitCity"));
        cbOmitCity->setGeometry(QRect(690, 50, 69, 22));
        cbHeuristic = new QComboBox(centralWidget);
        cbHeuristic->setObjectName(QStringLiteral("cbHeuristic"));
        cbHeuristic->setGeometry(QRect(510, 10, 161, 22));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(26);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbHeuristic->sizePolicy().hasHeightForWidth());
        cbHeuristic->setSizePolicy(sizePolicy);
        lblHeuristic = new QLabel(centralWidget);
        lblHeuristic->setObjectName(QStringLiteral("lblHeuristic"));
        lblHeuristic->setGeometry(QRect(420, 10, 81, 16));
        lblSelectCities = new QLabel(centralWidget);
        lblSelectCities->setObjectName(QStringLiteral("lblSelectCities"));
        lblSelectCities->setGeometry(QRect(420, 50, 71, 16));
        btnFindPath = new QPushButton(centralWidget);
        btnFindPath->setObjectName(QStringLiteral("btnFindPath"));
        btnFindPath->setGeometry(QRect(510, 90, 75, 23));
        txtboxDispalyPath = new QPlainTextEdit(centralWidget);
        txtboxDispalyPath->setObjectName(QStringLiteral("txtboxDispalyPath"));
        txtboxDispalyPath->setGeometry(QRect(20, 140, 121, 241));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 988, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lblConn->setText(QApplication::translate("MainWindow", "Select connections file:", 0));
        lblLoc->setText(QApplication::translate("MainWindow", "Select locations file:", 0));
        btnSelectLoc->setText(QApplication::translate("MainWindow", "Select", 0));
        btnSelectConn->setText(QApplication::translate("MainWindow", "Select", 0));
        btnBuildMap->setText(QApplication::translate("MainWindow", "Build Map", 0));
        lblHeuristic->setText(QApplication::translate("MainWindow", "Select Heuristic:", 0));
        lblSelectCities->setText(QApplication::translate("MainWindow", "Select Cities:", 0));
        btnFindPath->setText(QApplication::translate("MainWindow", "Find Path", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
