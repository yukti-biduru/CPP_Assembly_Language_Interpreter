#include "LDA.h"
#include <iostream>

using namespace std;

LDA::LDA(string argument)
{
	argValue = argument;
	printString = "LDA";
}

 void LDA::execute()
{
	 auto temp = hardware.symbol_array.find(argValue);
	 hardware.register_a[0] = hardware.memory[temp->second];
}