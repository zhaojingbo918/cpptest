// ExportTest2.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "ExportTest2.h"


// 这是导出变量的一个示例
EXPORTTEST2_API int nExportTest2=0;

// 这是导出函数的一个示例。
EXPORTTEST2_API int fnExportTest2(void)
{
    return 42;
}

 
extern "C" EXPORTTEST2_API void getHelloWorld(char* buffer)
{
#pragma warning(suppress : 4996) 
	strcpy(buffer, "hello world 单独aa"); 
	//  return 0;
}

// 这是已导出类的构造函数。
CExportTest2::CExportTest2()
{
    return;
}
