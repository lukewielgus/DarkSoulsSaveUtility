#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DarkSoulsSaveUtility.h"

class DarkSoulsSaveUtility : public QMainWindow
{
	Q_OBJECT

public:
	DarkSoulsSaveUtility(QWidget *parent = Q_NULLPTR);

private:
	Ui::DarkSoulsSaveUtilityClass ui;
};
