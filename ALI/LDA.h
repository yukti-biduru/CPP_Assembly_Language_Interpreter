#ifndef LDA_h
#define LDA_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class LDA : public Instruction
{
public: 
	LDA(string argument);
	int memoryspace;
	void execute();
};

#endif
