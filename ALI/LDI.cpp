#include "LDI.h"
#include <iostream>

using namespace std;

LDI::LDI(string argument, Hardware _hardware)
{
	hardware = _hardware;
	argValue = argument;
	printString = "LDI";
}

void LDI::execute()
{
	hardware.register_a[0] = argValue;
}