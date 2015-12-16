#pragma once

#include <dzaction.h>
#include <luabind\detail\conversion_policies\native_converter.hpp>

namespace luabind
{
	template <>
	struct default_converter<QString>
		: native_converter_base<QString>
	{
		static int compute_score(lua_State* L, int index)
		{
			return lua_type(L, index) == LUA_TSTRING ? 0 : -1;
		}

		QString from(lua_State* L, int index)
		{
			return QString(lua_tostring(L, index));
		}

		void to(lua_State* L, QString const& x)
		{
			lua_pushstring(L, x.toAscii());
		}
	};

	template <>
	struct default_converter<QString const&>
		: default_converter<QString>
	{};
}