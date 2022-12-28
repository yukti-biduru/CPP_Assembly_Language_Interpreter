#ifndef LDI_h
#define LDI_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class LDI : public Instruction
{
public:
	LDI(string argument, Hardware hardware);
	int memoryspace;
	void execute();
};

#endif


