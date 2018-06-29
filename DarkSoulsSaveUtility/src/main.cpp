#include "DarkSoulsSaveUtility.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DarkSoulsSaveUtility w;
	w.show();
	return a.exec();
}
