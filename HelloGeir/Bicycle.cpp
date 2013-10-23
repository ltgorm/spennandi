#include "StdAfx.h"
#include "Bicycle.h"

bool fullSuspension = false;

Bicycle::Bicycle(void)
{
}

Bicycle::~Bicycle(void)
{
}

void Bicycle::setSuspension(bool full) {
	fullSuspension = full;
}

bool Bicycle::isFullSuspension() {
	return fullSuspension;
}

void Bicycle::ride() {
	std::cout << (fullSuspension ? "Smooth riding - Er'etta ekki massinn???\n" : "Not so smooth\n");
}

