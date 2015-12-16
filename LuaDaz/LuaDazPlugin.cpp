#include "LuaDazPlugin.h"

#include "plugininfo.h"

#include <luabind\luabind.hpp>

DZ_CUSTOM_PLUGIN_DEFINITION(LuaDazPlugin);

LuaDazPlugin::LuaDazPlugin() :
	DzPlugin(PLUGIN_NAME, PLUGIN_AUTHOR, PLUGIN_DESCRIPTION, PLUGIN_MAJOR, PLUGIN_MINOR, PLUGIN_REV, PLUGIN_BUILD)
{
}


LuaDazPlugin::~LuaDazPlugin()
{
	if(luaState)
		delete luaState;
}

void LuaDazPlugin::startup()
{
	luaState = luaL_newstate();
	luabind::open(luaState);
}

void LuaDazPlugin::shutdown()
{
	lua_close(luaState);
}