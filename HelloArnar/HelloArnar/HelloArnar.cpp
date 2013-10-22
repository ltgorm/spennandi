// HelloArnar.cpp : main project file.

#include "stdafx.h"
#include <winsock2.h>
using namespace System;
#include <winsock2.h>
#include <windows.h>
#include <iostream>
#pragma comment(lib,"ws2_32.lib")
using namespace std;

#include "PingingClass.h"



 


int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World. Now in NewBlue");

	Console::WriteLine(L"Now what");


	PingingClass cl;

	cl.doPing();


    return 0;
}
