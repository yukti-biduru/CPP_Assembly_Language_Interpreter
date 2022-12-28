#include "ADD.h"
#include <iostream>
#include <string>

using namespace std;

ADD::ADD(string argument)
{
	argValue = argument;
	printString = "ADD";
}

void ADD::execute()
{
	hardware.register_a[0] = stoi(hardware.register_a[0]) + stoi(hardware.register_b[0]);
	if (stoi(hardware.register_a[0]) == 0)
	{
		hardware.zero_result_bit = 1;
	}
	else
	{
		hardware.zero_result_bit = 0;
	}

	if (stoi(hardware.register_a[0]) > 2147483647 || stoi(hardware.register_a[0]) < -2147483648)
	{
		hardware.overflow_bit = 1;
	}
	else
	{
		hardware.overflow_bit = 0;
	}
}