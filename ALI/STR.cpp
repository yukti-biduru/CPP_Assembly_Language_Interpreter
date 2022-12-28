#include "STR.h"
#include <iostream>

using namespace std;

STR::STR(string argument)
{
	argValue = argument;
	printString = "STR";
}

void STR::execute()
{
	auto temp = hardware.symbol_array.find(argValue);
	hardware.memory[temp->second] = hardware.register_a[0];
}