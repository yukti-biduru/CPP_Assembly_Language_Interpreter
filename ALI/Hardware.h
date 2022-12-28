#ifndef Hardware_h
#define Hardware_h

#include <iostream>
#include <map>
using namespace std;

class Hardware
{
public:
	string memory[256];
	string register_a[1], register_b[1];
	int program_counter, zero_result_bit, overflow_bit, memory_ptr_code, memory_ptr_data, symbol_array_ptr;
	map<string, int> symbol_array;

	Hardware();
	int getNextMemorySpace(string caller);
	void print();
	void load_to_memory(string instruction_set);
};

#endif

