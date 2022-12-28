#ifndef XCH_h
#define XCH_h

#include <iostream>
#include "Instruction.h"

using namespace std;

class XCH : public Instruction
{
public:
	XCH(string argument);
	int memoryspace;
	void execute();
};

#endif
