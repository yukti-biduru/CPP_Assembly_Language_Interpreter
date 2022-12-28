#include "JZS.h"
#include <iostream>
#include <string>

using namespace std;

JZS::JZS(string argument)
{
	argValue = argument;
	printString = "JZS";
}

void JZS::execute()
{
	if (hardware.zero_result_bit == 1)
	{
		hardware.program_counter = stoi(argValue);
	}
}