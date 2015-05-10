/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label1;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_ans;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLCDNumber *lcdNumber;
    QLineEdit *text02;
    QPushButton *pushButton_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(735, 449);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(20, 10, 391, 351));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 20, 291, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 70, 141, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(430, 300, 291, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 17pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";\n"
""));
        label_ans = new QLabel(centralWidget);
        label_ans->setObjectName(QStringLiteral("label_ans"));
        label_ans->setGeometry(QRect(430, 250, 291, 41));
        label_ans->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224\";"));
        label_ans->setTextFormat(Qt::AutoText);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 170, 141, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 170, 141, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 220, 191, 16));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 360, 81, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(530, 360, 71, 31));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(610, 360, 111, 31));
        text02 = new QLineEdit(centralWidget);
        text02->setObjectName(QStringLiteral("text02"));
        text02->setGeometry(QRect(430, 100, 291, 51));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(630, 212, 91, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 735, 22));
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
        label1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:26pt;\">\345\257\204\347\224\237\350\237\262\347\267\264\347\277\222\347\250\213\345\274\217</span></p><p><span style=\" font-size:16pt;\">\350\243\275\344\275\234\344\272\272\357\274\232CFTang</span></p><p><br/></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\351\226\213\345\247\213\344\275\234\347\255\224/\344\270\213\344\270\200\351\241\214(Ctrl)", 0));
        label->setText(QApplication::translate("MainWindow", "\344\275\234\347\255\224\345\215\200(\350\253\213\346\263\250\346\204\217\345\244\247\345\260\217\345\257\253)", 0));
        label_2->setText(QString());
        label_ans->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "\347\242\272\345\256\232\347\255\224\346\241\210(Enter)", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\347\265\246\346\210\221\347\255\224\346\241\210(Esc)", 0));
        label_3->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "\347\265\220\346\235\237/\350\250\210\345\210\206", 0));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\275\240\347\232\204\345\276\227\345\210\206:</span></p></body></html>", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "\351\207\215\350\250\255(Del)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
