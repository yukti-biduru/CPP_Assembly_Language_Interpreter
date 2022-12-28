#ifndef JVS_h
#define JVS_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class JVS : public Instruction
{
public:
	JVS(string argument);
	int memoryspace;
	void execute();
};

#endif
