#include "QtTest.h"
#include <qmessagebox.h>
#include <qstring.h>
#include <qvalidator.h>
#include <qpalette.h>
#include <iostream>
#include <qslider>
#include <QKeyEvent>
#include <math.h>

QtTest::QtTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("�����������")); // ������������� ��� ����

	this->setFixedWidth(369);  // ��������� ������ ���� �� ������
	this->setFixedHeight(610); // ��������� ������ ���� �� ������
	
	pall.setColor(QPalette::Window, QColor(53, 53, 53));// ������������� ���� ����	
	qApp->setPalette(pall);

	ui.lineEdit_percent->setValidator(validator);// ��������� ������������� ���� ��������� �������� � ���� �������((%)percent)

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
	connect(ui.pushButton_point, &QPushButton::clicked, this, &QtTest::point);


	connect(ui.pushButton_clear, &QPushButton::clicked, this, &QtTest::clear_display);

	connect(ui.pushButton_plus,&QPushButton::clicked,this,&QtTest::plus);
	connect(ui.pushButton_minus,&QPushButton::clicked,this,&QtTest::minus);
	connect(ui.pushButton_delenie, &QPushButton::clicked, this, &QtTest::share);
	connect(ui.pushButton_umnojenie, &QPushButton::clicked, this, &QtTest::multiply);
	connect(ui.pushButton_total,&QPushButton::clicked,this,&QtTest::total);

	connect(ui.Slider_LCD_color,&QSlider::valueChanged,this,&QtTest::slider_change_LCD_color);
	connect(ui.Slider_Background_Color,&QSlider::valueChanged,this,&QtTest::slider_change_background_color);
	
	connect(ui.pushButton_pow, &QPushButton::clicked, this, &QtTest::pow_calculator);
	connect(ui.pushButton_sqrt, &QPushButton::clicked, this, &QtTest::sqrt_calculator);
	connect(ui.pushButton_percent, &QPushButton::clicked, this, &QtTest::percent_calculator);

	connect(ui.pushButton_arroy, &QPushButton::clicked, this, &QtTest::arroy);
	connect(ui.pushButton_off, &QPushButton::clicked, qApp, &QApplication::closeAllWindows);//������� ��������� ����������


}


void QtTest::slot_button_0() {
	//if (display_number.size() > 0)
	//{
		ui.lcdNumber->display(display_number += StrButton_0);				
	//}
	 
	
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
	
void QtTest::point() //������� ��������� ���� ���������� ����� 
{
	if (bool_point && display_number.size()>0) {  // ������� ��������� ���� ����� ����� ����� ������������
		ui.lcdNumber->display(display_number += StrPoint);
		bool_point = false;
	}

/*	for (int i = 0; i < display_number.size(); ++i)
		if (display_number[i] == ".")
		{
			bool_point = false;
		}
		else
			bool_point = true;
			*/
}







//======================================================

void QtTest::clear_display() // ������� �������, ���������� ��� ��������� �� ����
{
	display_number.clear();
	dump.clear();
	result = 0;
	ui.lcdNumber->display(0);
	ui.lineEdit_percent->clear();
	bool_point = true;
	i = 0;
	k1 = true;
	k2 = true;
}
 
void QtTest::minus() // ���������
{
	operand = '-';
	a = display_number.toDouble();
	if (i == 0) {
		result = a;
		dump.push_back(a);
		ui.lcdNumber->display(result);
		display_number.clear();
		bool_point = true;
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
		bool_point = true;
	}
}


void QtTest::plus() // ��������
{
	operand = '+';
	a = display_number.toDouble();
	if (i == 0) {
		result = a;	
		dump.push_back(a);
		ui.lcdNumber->display(result);
		display_number.clear();
		bool_point = true;
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
		bool_point = true;
	}
	

	
}

void QtTest::share() // �������
{
	operand = '/';
	a = display_number.toDouble();
	if (i == 0) {
		result = a;
		dump.push_back(a);
		ui.lcdNumber->display(result);
		display_number.clear();
		bool_point = true;
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
		bool_point = true;
	}




}

void QtTest::multiply()//���������
{
	operand = '*';
	a = display_number.toDouble();
	if (i == 0) {
		result = a;
		dump.push_back(a);
		ui.lcdNumber->display(result);
		display_number.clear();
		bool_point = true;
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
		bool_point = true;
	}
	
}

int QtTest::pow_calculator()// ������� ���������� � ������� (�������� �������� � �����������)!!!
{
	if (k1) {
		a = display_number.toDouble(); // �������� �����
		result = pow(a, 2);// �������� ���������
		ui.lcdNumber->display(result);
		display_number.clear();
		bool_point = true;
		k1 = false;
		
	}
	else {
		result = pow(result, 2);
		ui.lcdNumber->display(result);// ����������
		display_number.clear();
		bool_point = true;
		
	}
	// result ���� �������� ����� � ������� ��� ��������� �����
	
	return result;
}

double QtTest::sqrt_calculator()// ������� ���������� ����� ����������� (�������� �������� � �����������)!!!
{
	if (k2) {
		a = display_number.toDouble(); // �������� �����
		result = sqrt(a);// �������� ���������
		ui.lcdNumber->display(result);
		display_number.clear();
		bool_point = true;
		k2 = false;

	}
	else {
		result = sqrt(result);
		ui.lcdNumber->display(result);// ����������
		display_number.clear();
		bool_point = true;
	}
	return result;
}

double QtTest::percent_calculator() // ������� ����������� ������� �� �����
{
	a = display_number.toDouble();
	result = ((double)a / 100) * ui.lineEdit_percent->text().toInt();
	ui.lcdNumber->display(result);
	return 0;
}

//================================================================


void QtTest::arroy()// ������� ������� ��������� ��������� �����
{
	display_number.chop(1);	
	a = display_number.toDouble();
	ui.lcdNumber->display(a);
}






void QtTest::total()// ������� ������� ��������� ��� ������� ������ "="
{
	switch (operand) {
	case '+':
		a = display_number.toDouble();//�������� ������ � ������� � ����������� �� � �����		
		std::cout << result<<std::endl;
	
		if (i == 0) {     // ���� ����� ������
			result = a;   // �� �������� ��������� �� ������ ����� ����� � �������

			dump.push_back(a);// ��������� ����� � ���������
			ui.lcdNumber->display(result);// ������� ����� �� �����
			display_number.clear();//������� ������(QString) ������� [125671] ��� ����� ���������� �����
			bool_point = true;
			i++;//� ������������ �� ��������� ������
		}
		else //�����
		{
			if (a != 0) // ���� ����� �� ����� ����
			{
				dump.push_back(a); // �� ��������� � ���������
			}
			for (; i < dump.size(); i++)// ���� ������ �� �������
			{
				result += dump[i];// � ���������� ��� �����
				
			}
			ui.lcdNumber->display(result);//���������� �������� ���������
			display_number.clear();//������� ������(QString) ������� [125671] ��� ����� ���������� �����
			bool_point = true;
		}
		break;
	case '-':
		a = display_number.toDouble();
		if (i == 0) {
			
			result = a;
			dump.push_back(a);
			ui.lcdNumber->display(result);
			display_number.clear();
			bool_point = true;
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
			bool_point = true;
		}
		break;
	case '*':
		a = display_number.toDouble();
		if (i == 0) {
			result = a;
			
			dump.push_back(a);
			ui.lcdNumber->display(result);
			display_number.clear();
			bool_point = true;
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
			bool_point = true;
		}
		break;
	case '/':
		a = display_number.toDouble();
		if (i == 0) {
			result = a;
			dump.push_back(a);
			ui.lcdNumber->display(result);
			display_number.clear();
			bool_point = true;
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
			bool_point = true;
		}
		break;
	}
}

void QtTest::slider_change_LCD_color()const // ������� ������ ���� �������
{	 
    ui.lcdNumber->setStyleSheet(color[ui.Slider_LCD_color->value()]);
}

void QtTest::slider_change_background_color()const // ������� ������ ���� ����
{
	qApp->setStyleSheet(color[ui.Slider_Background_Color->value()]);
	qApp->setStyleSheet("QMainWindow {"+ color[ui.Slider_Background_Color->value()]+"}");
}

void QtTest::keyPressEvent(QKeyEvent *event) // ���������� ������� ����� � ������ ����������
{
	int key = event->key();
	
	switch (event->key())
	{
	case Qt::Key_0: if (display_number.size() > 0) { ui.lcdNumber->display(display_number += StrButton_0); } break;
	case Qt::Key_1: ui.lcdNumber->display(display_number += StrButton_1); break;
	case Qt::Key_2: ui.lcdNumber->display(display_number += StrButton_2); break;
	case Qt::Key_3: ui.lcdNumber->display(display_number += StrButton_3); break;
	case Qt::Key_4: ui.lcdNumber->display(display_number += StrButton_4); break;
	case Qt::Key_5: ui.lcdNumber->display(display_number += StrButton_5); break;
	case Qt::Key_6: ui.lcdNumber->display(display_number += StrButton_6); break;
	case Qt::Key_7: ui.lcdNumber->display(display_number += StrButton_7); break;
	case Qt::Key_8: ui.lcdNumber->display(display_number += StrButton_8); break;
	case Qt::Key_9: ui.lcdNumber->display(display_number += StrButton_9); break;
	case Qt::Key_Backspace:arroy(); break;
	case Qt::Key_Return:total(); break;

	}


}



		