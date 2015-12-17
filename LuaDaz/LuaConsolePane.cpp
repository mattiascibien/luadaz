#include "LuaConsolePane.h"

#include <QtGui\qlayout.h>

LuaConsolePane::LuaConsolePane()
	: DzPane( "Lua Console" )
{
	m_commandLineEdit = new QLineEdit(this);
	m_commandLineEdit->setPlaceholderText("Enter Lua code");
	
	m_commandResultTextEdit = new QPlainTextEdit(this);
	m_commandResultTextEdit->setReadOnly(true);

	m_sendCommandPushButton = new QPushButton(tr("Send..."), this);

	QHBoxLayout *cmdLineLayout = new QHBoxLayout(this);
	cmdLineLayout->addWidget(m_commandLineEdit);
	cmdLineLayout->addWidget(m_sendCommandPushButton);

	QVBoxLayout *mainLayout = new QVBoxLayout(this);
	mainLayout->addWidget(m_commandResultTextEdit, 1);
	mainLayout->addLayout(cmdLineLayout);

	this->setLayout(mainLayout);
}


LuaConsolePane::~LuaConsolePane()
{
}
