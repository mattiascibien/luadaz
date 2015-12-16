#pragma once
#include <dzplugin.h>

#include <lua.hpp>

class LuaDazPlugin :
	public DzPlugin
{
public:
	LuaDazPlugin();
	~LuaDazPlugin();

protected:
	void startup() override;
	void shutdown() override;

private:
	lua_State *luaState;
};

