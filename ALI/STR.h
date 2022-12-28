#ifndef STR_h
#define STR_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class STR : public Instruction
{
public:
	STR(string argument);
	int memoryspace;
	void execute();
};

#endif
