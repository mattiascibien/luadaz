/**********************************************************************
	Copyright (C) 2014 Mattias Cibien. All Rights Reserved.
**********************************************************************/

#include <dzplugin.h>
#include <dzapp.h>

#include "plugininfo.h"
#include "version.h"

#include "luadzaction.h"

DZ_PLUGIN_DEFINITION(PLUGIN_DESCRIPTION);

DZ_PLUGIN_AUTHOR(PLUGIN_NAME);

DZ_PLUGIN_VERSION(PLUGIN_MAJOR, PLUGIN_MINOR, PLUGIN_REV, PLUGIN_BUILD);

DZ_PLUGIN_DESCRIPTION(QString(PLUGIN_DESCRIPTION).arg(dzApp->getDocumentationPath()));