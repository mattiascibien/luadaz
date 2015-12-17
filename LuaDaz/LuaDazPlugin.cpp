#include "LuaDazPlugin.h"

#include "plugininfo.h"

#include <luabind\luabind.hpp>

LuaDazPlugin::LuaDazPlugin() :
	DzPlugin(PLUGIN_NAME, PLUGIN_AUTHOR, PLUGIN_DESCRIPTION, PLUGIN_MAJOR, PLUGIN_MINOR, PLUGIN_REV, PLUGIN_BUILD)
{
}


LuaDazPlugin::~LuaDazPlugin()
{

}

void LuaDazPlugin::startup()
{
	luaState = luaL_newstate();
	luaL_openlibs(luaState);
	luabind::open(luaState);
}

void LuaDazPlugin::shutdown()
{
	lua_close(luaState);
}