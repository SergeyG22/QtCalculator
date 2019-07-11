#include "QtTest.h"
#include <QtWidgets/QApplication>
#include <qfile.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QFile style;
	style.setFileName("style.css");//подключение файла со стилями
	style.open(QFile::ReadOnly);
	QString qssStr = style.readAll();
	qApp->setStyleSheet(qssStr);
	QtTest w;
	w.show();
	return a.exec();
	
}
