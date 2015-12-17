#pragma once

#include <dzpane.h>
#include <dzaction.h>

#include <QtGui\qlineedit.h>
#include <QtGui\qplaintextedit.h>
#include <QtGui\qpushbutton.h>

class LuaConsolePaneAction :
	public DzPaneAction
{
	Q_OBJECT
public:
	LuaConsolePaneAction() : DzPaneAction("LuaConsolePane") { }

	void init() override
	{
		DzPaneAction::init();
		setIcon("luadaz/images/lua-logo.png");
	}
};

class LuaConsolePane :
	public DzPane
{
	Q_OBJECT
public:
	LuaConsolePane();
	~LuaConsolePane();

private:
	QPlainTextEdit *m_commandResultTextEdit;
	QLineEdit *m_commandLineEdit;
	QPushButton *m_sendCommandPushButton;
};

