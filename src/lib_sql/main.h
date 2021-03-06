#pragma once

#include "..\common.h"

EXPORT void _init(void* heap, S64* heap_cnt, S64 app_code, const U8* use_res_flags);
EXPORT SClass* _makeSql(SClass* me_, const U8* path);
EXPORT void _sqlDtor(SClass* me_);
EXPORT void _sqlFin(SClass* me_);
EXPORT Bool _sqlExec(SClass* me_, const void* cmd);
EXPORT S64 _sqlGetInt(SClass* me_, S64 col);
EXPORT double _sqlGetFloat(SClass* me_, S64 col);
EXPORT void* _sqlGetStr(SClass* me_, S64 col);
EXPORT Bool _sqlNext(SClass* me_);
