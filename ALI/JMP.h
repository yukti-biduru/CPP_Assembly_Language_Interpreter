#ifndef JMP_h
#define JMP_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class JMP : public Instruction
{
public:
	JMP(string argument);
	int memoryspace;
	void execute();
};

#endif
