#include "XCH.h"
#include <iostream>

using namespace std;

XCH::XCH(string argument)
{
	argValue = argument;
	printString = "XCH";
}

void XCH::execute()
{
	string temp = hardware.register_a[0];
	hardware.register_a[0] = hardware.register_b[0];
	hardware.register_b[0] = temp;
}