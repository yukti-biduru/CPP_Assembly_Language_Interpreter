#include "Instruction.h"
#include <iostream>


using namespace std;

	
	Instruction::Instruction()
	{
		
	}

	void Instruction::print()
	{
		cout << printString << " " << argValue;
	}

