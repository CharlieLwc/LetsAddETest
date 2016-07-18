// LetsAddETest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AllTests.h"
#include <Windows.h>

int main()
{

	long startCount = GetTickCount();
	
	test004();

	cout << "Time Using " << GetTickCount() - startCount << "ms" << endl;




	getchar();

    return 0;
}

