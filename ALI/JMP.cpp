#include "JMP.h"
#include <iostream>
#include <string>

using namespace std;

JMP::JMP(string argument)
{
	argValue = argument;
	printString = "JMP";
}

void JMP::execute()
{
	hardware.program_counter = stoi(argValue);
}