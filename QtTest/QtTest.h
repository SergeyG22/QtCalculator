#pragma once

#include <QtWidgets/QMainWindow>
#include <qpalette.h>
#include <qvalidator.h>
#include "ui_QtTest.h"

class QtTest : public QMainWindow
{
	Q_OBJECT

public:
	QtTest(QWidget *parent = Q_NULLPTR);
	QPalette pall;
	QVector<double>dump;
	QValidator *validator = new QIntValidator();
	QString display_number;
	QString StrButton_0 = '0';
	QString StrButton_1 = '1';
	QString StrButton_2 = '2';
	QString StrButton_3 = '3';
	QString StrButton_4 = '4';
	QString StrButton_5 = '5';
	QString StrButton_6 = '6';
	QString StrButton_7 = '7';
	QString StrButton_8 = '8';
	QString StrButton_9 = '9';
	QString StrPoint = '.';
	QString color[9] = { 
		"background-color: red",
		"background-color: blue",
		"background-color: green",
		"background-color: yellow",
		"background-color: grey",
		"background-color: brown",
		"background-color: white",
		"background-color: orange",
		"background-color: purple"
	};
	double a;
	int i = 0;
    double result;
	char operand;
	bool bool_point = true;
	bool k1 = true;
	bool k2 = true;
	virtual void keyPressEvent(QKeyEvent * event);
private:
	Ui::QtTestClass ui;
signals:
	int size_text();
private slots:
	void point();
	void slot_button_0();
	void slot_button_1();
	void slot_button_2();
	void slot_button_3();
	void slot_button_4();
	void slot_button_5();
	void slot_button_6();
	void slot_button_7();
	void slot_button_8();
	void slot_button_9();
	void clear_display();
	void plus();
	void minus();
	void share();
	void multiply();
	void total();
	void slider_change_LCD_color()const;
	void slider_change_background_color()const;
	int pow_calculator();
	double sqrt_calculator();
	double percent_calculator();
	void arroy();
};
