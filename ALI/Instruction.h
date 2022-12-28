#ifndef Instruction_h
#define Instruction_h

#include <iostream>
#include "Instr.h"

using namespace std;

class Instruction : public Instr
{
public :
	string printString;
	string argValue;

	Instruction();
	void print();
	virtual void execute() = 0;
};
#endif
