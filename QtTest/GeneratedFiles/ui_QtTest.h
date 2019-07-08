/********************************************************************************
** Form generated from reading UI file 'QtTest.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTEST_H
#define UI_QTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTestClass
{
public:
    QWidget *centralWidget;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_12;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_delenie;
    QPushButton *pushButton_umnojenie;
    QPushButton *pushButton_point;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_total;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_minus;
    QSlider *Slider_LCD_color;
    QSlider *Slider_Background_Color;
    QLineEdit *lineEdit_percent;
    QPushButton *pushButton_arroy;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtTestClass)
    {
        if (QtTestClass->objectName().isEmpty())
            QtTestClass->setObjectName(QStringLiteral("QtTestClass"));
        QtTestClass->resize(369, 610);
        QFont font;
        font.setPointSize(8);
        QtTestClass->setFont(font);
        centralWidget = new QWidget(QtTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 10, 331, 87));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(false);
        font1.setWeight(50);
        lcdNumber->setFont(font1);
        lcdNumber->setDigitCount(15);
        pushButton_pow = new QPushButton(centralWidget);
        pushButton_pow->setObjectName(QStringLiteral("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(18, 122, 77, 33));
        QFont font2;
        font2.setPointSize(12);
        pushButton_pow->setFont(font2);
        pushButton_sqrt = new QPushButton(centralWidget);
        pushButton_sqrt->setObjectName(QStringLiteral("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(102, 122, 77, 33));
        pushButton_sqrt->setFont(font2);
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(277, 300, 71, 91));
        pushButton_plus->setFont(font2);
        pushButton_plus->setStyleSheet(QLatin1String("modern {\n"
"    display: inline-block;\n"
"    margin: 10px;\n"
"    padding: 8px 15px;\n"
"    background: #B8ED01;\n"
"    border: 1px solid rgba(0,0,0,0.15);\n"
"    border-radius: 4px;\n"
"    transition: all 0.3s ease-out;\n"
"    box-shadow: \n"
"        inset 0 1px 0 rgba(255,255,255,0.5), \n"
"        0 2px 2px rgba(0,0,0,0.3), \n"
"        0 0 4px 1px rgba(0,0,0,0.2); \n"
"    /* Font styles */\n"
"    text-decoration: none;\n"
"    text-shadow: 0 1px rgba(255,255,255,0.7);\n"
"}"));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(187, 412, 161, 33));
        pushButton_12->setFont(font2);
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(17, 412, 161, 33));
        pushButton_clear->setFont(font2);
        pushButton_delenie = new QPushButton(centralWidget);
        pushButton_delenie->setObjectName(QStringLiteral("pushButton_delenie"));
        pushButton_delenie->setGeometry(QRect(270, 122, 77, 33));
        pushButton_delenie->setFont(font2);
        pushButton_umnojenie = new QPushButton(centralWidget);
        pushButton_umnojenie->setObjectName(QStringLiteral("pushButton_umnojenie"));
        pushButton_umnojenie->setGeometry(QRect(270, 181, 77, 33));
        pushButton_umnojenie->setFont(font2);
        pushButton_point = new QPushButton(centralWidget);
        pushButton_point->setObjectName(QStringLiteral("pushButton_point"));
        pushButton_point->setGeometry(QRect(102, 358, 77, 33));
        pushButton_point->setFont(font2);
        pushButton_percent = new QPushButton(centralWidget);
        pushButton_percent->setObjectName(QStringLiteral("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(200, 480, 77, 33));
        pushButton_percent->setFont(font2);
        pushButton_total = new QPushButton(centralWidget);
        pushButton_total->setObjectName(QStringLiteral("pushButton_total"));
        pushButton_total->setGeometry(QRect(186, 358, 77, 33));
        pushButton_total->setFont(font2);
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setEnabled(true);
        pushButton_0->setGeometry(QRect(18, 358, 77, 33));
        pushButton_0->setFont(font2);
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(18, 299, 77, 33));
        pushButton_1->setFont(font2);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(102, 299, 77, 33));
        pushButton_2->setFont(font2);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(186, 299, 77, 33));
        pushButton_3->setFont(font2);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(18, 240, 77, 33));
        pushButton_4->setFont(font2);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(102, 240, 77, 33));
        pushButton_5->setFont(font2);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(186, 240, 77, 33));
        pushButton_6->setFont(font2);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(18, 181, 77, 33));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QStringLiteral(""));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(102, 181, 77, 33));
        pushButton_8->setFont(font2);
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(186, 181, 77, 33));
        pushButton_9->setFont(font2);
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(270, 240, 77, 33));
        pushButton_minus->setFont(font2);
        Slider_LCD_color = new QSlider(centralWidget);
        Slider_LCD_color->setObjectName(QStringLiteral("Slider_LCD_color"));
        Slider_LCD_color->setGeometry(QRect(30, 470, 160, 22));
        Slider_LCD_color->setMaximum(8);
        Slider_LCD_color->setOrientation(Qt::Horizontal);
        Slider_Background_Color = new QSlider(centralWidget);
        Slider_Background_Color->setObjectName(QStringLiteral("Slider_Background_Color"));
        Slider_Background_Color->setGeometry(QRect(30, 510, 160, 22));
        Slider_Background_Color->setMaximum(8);
        Slider_Background_Color->setOrientation(Qt::Horizontal);
        lineEdit_percent = new QLineEdit(centralWidget);
        lineEdit_percent->setObjectName(QStringLiteral("lineEdit_percent"));
        lineEdit_percent->setGeometry(QRect(290, 480, 51, 33));
        lineEdit_percent->setFont(font2);
        lineEdit_percent->setMaxLength(3);
        pushButton_arroy = new QPushButton(centralWidget);
        pushButton_arroy->setObjectName(QStringLiteral("pushButton_arroy"));
        pushButton_arroy->setGeometry(QRect(186, 122, 77, 33));
        pushButton_arroy->setFont(font2);
        QtTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 369, 26));
        QtTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtTestClass->setStatusBar(statusBar);

        retranslateUi(QtTestClass);

        QMetaObject::connectSlotsByName(QtTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtTestClass)
    {
        QtTestClass->setWindowTitle(QApplication::translate("QtTestClass", "QtTest", nullptr));
        pushButton_pow->setText(QApplication::translate("QtTestClass", "x\302\262", nullptr));
        pushButton_sqrt->setText(QApplication::translate("QtTestClass", "\342\210\232", nullptr));
        pushButton_plus->setText(QApplication::translate("QtTestClass", "+", nullptr));
        pushButton_12->setText(QApplication::translate("QtTestClass", "off", nullptr));
        pushButton_clear->setText(QApplication::translate("QtTestClass", "clear", nullptr));
        pushButton_delenie->setText(QApplication::translate("QtTestClass", "\303\267", nullptr));
        pushButton_umnojenie->setText(QApplication::translate("QtTestClass", "x", nullptr));
        pushButton_point->setText(QApplication::translate("QtTestClass", ".", nullptr));
        pushButton_percent->setText(QApplication::translate("QtTestClass", "%", nullptr));
        pushButton_total->setText(QApplication::translate("QtTestClass", "=", nullptr));
        pushButton_0->setText(QApplication::translate("QtTestClass", "0", nullptr));
        pushButton_1->setText(QApplication::translate("QtTestClass", "1", nullptr));
        pushButton_2->setText(QApplication::translate("QtTestClass", "2", nullptr));
        pushButton_3->setText(QApplication::translate("QtTestClass", "3", nullptr));
        pushButton_4->setText(QApplication::translate("QtTestClass", "4", nullptr));
        pushButton_5->setText(QApplication::translate("QtTestClass", "5", nullptr));
        pushButton_6->setText(QApplication::translate("QtTestClass", "6", nullptr));
        pushButton_7->setText(QApplication::translate("QtTestClass", "7", nullptr));
        pushButton_8->setText(QApplication::translate("QtTestClass", "8", nullptr));
        pushButton_9->setText(QApplication::translate("QtTestClass", "9", nullptr));
        pushButton_minus->setText(QApplication::translate("QtTestClass", "-", nullptr));
        pushButton_arroy->setText(QApplication::translate("QtTestClass", "->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtTestClass: public Ui_QtTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTEST_H
