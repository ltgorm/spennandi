// HelloGeir.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bicycle.h"


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Let's start with a hard-tail\n";

	Bicycle* myBike = new Bicycle();
	myBike->ride();

	std::cout << "Let's soften things a bit\n";

	myBike->setSuspension(true);
	myBike->ride();

	system("pause");

	delete(myBike);
	return 0;
}

