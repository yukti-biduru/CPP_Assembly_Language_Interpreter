#ifndef Instr_h
#define Instr_h
#include "Hardware.h"
class Instr
{
public: 
	Hardware hardware;
	Instr();
	Instr(Hardware _hardware);
};
#endif

