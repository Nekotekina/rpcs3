#include "stdafx.h"
#include "Emu/Memory/Memory.h"
#include "Emu/System.h"
#include "Emu/IdManager.h"

#include "Emu/Cell/ErrorCodes.h"
#include "sys_dbg.h"

namespace vm { using namespace ps3; }

logs::channel sys_dbg("sys_dbg");

void sys_dbg_get_console_type(vm::ptr<u64> Console_Type)
{
	*Console_Type = 1; // CEX console
}