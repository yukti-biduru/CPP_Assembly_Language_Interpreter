#ifndef LDB_h
#define LDB_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class LDB : public Instruction
{
public: 
	LDB(string argument);
	int memoryspace;
	void execute();
};

#endif
