/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(464, 377);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family:century gothic;\n"
"	font-size: 24px;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background:rgb(26,44,54)\n"
"}"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 16, 301, 311));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 200, 187, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background:rgb(31,78,94);\n"
"	border-radius:3px;\n"
"}"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 270, 187, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background:rgb(31,78,94);\n"
"	border-radius:3px;\n"
"}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 100, 187, 32));
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2->setFrame(false);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 50, 187, 32));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"	border-radius:60px;\n"
"}"));
        lineEdit->setFrame(false);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 150, 187, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("century gothic"));
        label->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 464, 36));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Autorisation", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sing In", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
