#include "QtTest.h"
#include <qmessagebox.h>
#include <qstring.h>
#include <qvalidator.h>
#include <qpalette.h>
#include <iostream>
#include <qslider>

QtTest::QtTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("Калькулятор")); // устанавливает имя окна

	this->setFixedWidth(369);  // фиксирует размер окна по ширине
	this->setFixedHeight(610); // фиксирует размер окна по высоте
	
	pall.setColor(QPalette::Window, QColor(53, 53, 53));// Устанавливает цвет фона	
	qApp->setPalette(pall);

//	ui.lcdNumber->setDigitCount(15); //Задает количество чисел в цифровом поле 
	

//	connect(ui.lineEdit, &QLineEdit::textChanged, this, &QtTest::size_text_display);
	connect(ui.pushButton_0, &QPushButton::clicked, this, &QtTest::slot_button_0);
	connect(ui.pushButton_1,&QPushButton::clicked,  this,  &QtTest::slot_button_1);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &QtTest::slot_button_2);
	connect(ui.pushButton_3, &QPushButton::clicked, this, &QtTest::slot_button_3);
	connect(ui.pushButton_4, &QPushButton::clicked, this, &QtTest::slot_button_4);
	connect(ui.pushButton_5, &QPushButton::clicked, this, &QtTest::slot_button_5);
	connect(ui.pushButton_6, &QPushButton::clicked, this, &QtTest::slot_button_6);
	connect(ui.pushButton_7, &QPushButton::clicked, this, &QtTest::slot_button_7);
	connect(ui.pushButton_8, &QPushButton::clicked, this, &QtTest::slot_button_8);
	connect(ui.pushButton_9, &QPushButton::clicked, this, &QtTest::slot_button_9);
	connect(ui.pushButton_clear, &QPushButton::clicked, this, &QtTest::clear_display);
	connect(ui.pushButton_plus,&QPushButton::clicked,this,&QtTest::plus);
	connect(ui.pushButton_minus,&QPushButton::clicked,this,&QtTest::minus);
	connect(ui.pushButton_delenie, &QPushButton::clicked, this, &QtTest::share);
	connect(ui.pushButton_umnojenie, &QPushButton::clicked, this, &QtTest::multiply);
	connect(ui.pushButton_total,&QPushButton::clicked,this,&QtTest::total);

	connect(ui.Slider_LCD_color,&QSlider::valueChanged,this,&QtTest::slider_change_LCD_color);
	connect(ui.Slider_Background_Color,&QSlider::valueChanged,this,&QtTest::slider_change_background_color);
}

void QtTest::size_text_display() // функция позволяет вводить числовую строку и отображать ее на дисплее
{
	QValidator *validator = new QIntValidator();// валидатор предотвращает ввод строковых значений
	ui.lcdNumber->display(a);
	
}

//Функции slot_button... отображают вводимые цифры в виде текста (QString)

void QtTest::slot_button_0() {
	if (display_number.size() > 0)
	{
		ui.lcdNumber->display(display_number += StrButton_0);				
		a = display_number.toInt();
	}
	 
	
}

void QtTest::slot_button_1() {
	ui.lcdNumber->display(display_number+= StrButton_1);
	
}
void QtTest::slot_button_2() {
	ui.lcdNumber->display(display_number+=StrButton_2);
	
}
void QtTest::slot_button_3() { 
	ui.lcdNumber->display(display_number += StrButton_3);
	
}
void QtTest::slot_button_4() { 
	ui.lcdNumber->display(display_number += StrButton_4);
	
	
}
void QtTest::slot_button_5() { 
	ui.lcdNumber->display(display_number += StrButton_5);


	
}

void QtTest::slot_button_6() { 
	ui.lcdNumber->display(display_number += StrButton_6);
	
	
	
}
void QtTest::slot_button_7() { ui.lcdNumber->display(
	display_number += StrButton_7);
  
	
	
}
void QtTest::slot_button_8() { 
	ui.lcdNumber->display(display_number += StrButton_8);
	

}
void QtTest::slot_button_9() { 
	ui.lcdNumber->display(display_number += StrButton_9);
	
	
	
}

//======================================================

void QtTest::clear_display() // Очищает дисплей, сбрасывает на нуль
{
	display_number.clear();
	dump.clear();
	result = 0;
	ui.lcdNumber->display(0);
	i = 0;	         
}
 
void QtTest::minus()
{
	operand = '-';
	a = display_number.toInt();
	if (i == 0) {
		result = a;
		dump.push_back(a);
		ui.lcdNumber->display(result);
		display_number.clear();
		i++;
	}
	else
	{
		if (a != 0)
		{
			dump.push_back(a);
		}

		
		for (; i < dump.size(); i++)
		{
			result -= dump[i];
		
		}
		ui.lcdNumber->display(result);
		display_number.clear();
	}
}


void QtTest::plus()
{
	operand = '+';
	a = display_number.toInt();
	if (i == 0) {
		result = a;
		dump.push_back(a);
		ui.lcdNumber->display(result);
		display_number.clear();
		i++;
	}
	else
	{
		if (a != 0)
		{
			dump.push_back(a);
		}
	
		for (; i < dump.size(); i++)
		{
			result += dump[i];
			
		}
		ui.lcdNumber->display(result);
		display_number.clear();
	}
	

	
}

void QtTest::share()
{
	operand = '/';
	a = display_number.toInt();
	if (i == 0) {
		result = a;
		dump.push_back(a);
		ui.lcdNumber->display(result);
		display_number.clear();
		i++;
	}
	else
	{
		
		if (a != 0)
		{
			dump.push_back(a);
		}
		for (; i < dump.size(); i++)
		{
			result /= dump[i];
			
		}
		ui.lcdNumber->display(result);
		display_number.clear();
	}




}

void QtTest::multiply()
{
	operand = '*';
	a = display_number.toInt();
	if (i == 0) {
		result = a;
		dump.push_back(a);
		ui.lcdNumber->display(result);
		display_number.clear();
		i++;
	}
	else
	{
		if (a != 0)
		{
			dump.push_back(a);
		}
		
		for (; i < dump.size(); i++)
		{
			result *= dump[i];
			
		}
		ui.lcdNumber->display(result);
		display_number.clear();
	}
	
}

void QtTest::total()
{
	switch (operand) {
	case '+':
		a = display_number.toInt();
		if (i == 0) {
			result = a;
			dump.push_back(a);
			ui.lcdNumber->display(result);
			display_number.clear();
			i++;
		}
		else
		{
			if (a != 0)
			{
				dump.push_back(a);
			}
			for (; i < dump.size(); i++)
			{
				result += dump[i];
				
			}
			ui.lcdNumber->display(result);
			display_number.clear();
		}
		break;
	case '-':
		a = display_number.toInt();
		if (i == 0) {
			
			result = a;
			dump.push_back(a);
			ui.lcdNumber->display(result);
			display_number.clear();
			i++;
		}
		else
		{
			if (a != 0)
			{
				dump.push_back(a);
			}
			for (; i < dump.size(); i++)
			{
				
				result -= dump[i];
				
			}
			ui.lcdNumber->display(result);
			display_number.clear();
		}
		break;
	case '*':
		a = display_number.toInt();
		if (i == 0) {
			result = a;
			
			dump.push_back(a);
			ui.lcdNumber->display(result);
			display_number.clear();
			i++;
		}
		else
		{
			if (a != 0)
			{
				dump.push_back(a);
			}
			for (; i < dump.size(); i++)
			{
				result *= dump[i];
							
			}
			ui.lcdNumber->display(result);
			display_number.clear();
		}
		break;
	case '/':
		a = display_number.toInt();
		if (i == 0) {
			result = a;
			dump.push_back(a);
			ui.lcdNumber->display(result);
			display_number.clear();
			i++;
		}
		else
		{
			if (a != 0)
			{
				dump.push_back(a);
			}
			for (; i < dump.size(); i++)
			{
				result /= dump[i];
			}
			ui.lcdNumber->display(result);
			display_number.clear();
		}
		break;



	}






}

void QtTest::slider_change_LCD_color() // функция меняет цвет дисплея
{	 
    ui.lcdNumber->setStyleSheet(color[ui.Slider_LCD_color->value()]);
}

void QtTest::slider_change_background_color() // функция меня цвет фона
{
	qApp->setStyleSheet(color[ui.Slider_Background_Color->value()]);
	qApp->setStyleSheet("QMainWindow {"+ color[ui.Slider_Background_Color->value()]+"}");
}



