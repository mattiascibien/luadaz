#pragma once

#include <lua.hpp>
#include <luabind\luabind.hpp>

#include <dzaction.h>

void init_dzAction(lua_State *state)
{
	luabind::module(state)[
		luabind::class_<DzAction>("Action")
	];
}