#ifndef DEC_h
#define DEC_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class DEC : public Instruction
{
public:
	DEC(string argument);
	int memoryspace;
	void execute();
};
#endif