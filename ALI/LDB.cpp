#include "LDB.h"
#include <iostream>

using namespace std;

LDB::LDB(string argument)
{
	argValue = argument;
	printString = "LDB";
}

void LDB::execute()
{
	auto temp = hardware.symbol_array.find(argValue);
	hardware.register_b[0] = hardware.memory[temp->second];
}