#ifndef JZS_h
#define JZS_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class JZS : public Instruction
{
public:
	JZS(string argument);
	int memoryspace;
	void execute();
};

#endif
