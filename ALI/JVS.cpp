#include "JVS.h"
#include <iostream>
#include <string>

using namespace std;

JVS::JVS(string argument)
{
	argValue = argument;
	printString = "JVS";
}

void JVS::execute()
{
	if (hardware.overflow_bit == 1)
	{
		hardware.program_counter = stoi(argValue);
	}
}