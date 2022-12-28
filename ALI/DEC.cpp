#include "DEC.h"

#include <iostream>

using namespace std;

DEC::DEC(string argument)
{
	printString = "DEC";
	argValue = argument;
}

void DEC::execute()
{
	memoryspace = hardware.getNextMemorySpace("data");
	pair<string, int> symbol = pair<string, int>();
	symbol.first = argValue;
	symbol.second = memoryspace;
	hardware.symbol_array.insert(symbol);

	hardware.memory_ptr_data++;
	hardware.symbol_array_ptr++;
}
