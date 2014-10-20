#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

int main(){
    lua_State * L = luaL_newstate();
    luaL_openlibs(L);

    lua_getglobal(L, "print");
    lua_pushstring(L,"Hello Zeste de Savoir ! From Lua to C with Homebrew !");

    lua_call(L, 1, 0);

    lua_close(L);
    return 0;
}