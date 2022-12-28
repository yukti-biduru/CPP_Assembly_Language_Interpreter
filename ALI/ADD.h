#ifndef ADD_h
#define ADD_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class ADD : public Instruction
{
public: 
	ADD(string argument);
	int memoryspace;
	void execute();
};

#endif
