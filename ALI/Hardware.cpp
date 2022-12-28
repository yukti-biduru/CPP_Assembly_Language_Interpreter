#include "Hardware.h"
#include <iostream>

using namespace std;


	Hardware::Hardware()
	{
		//register_a[0] = "";
		//register_b[0] = "";
		program_counter = 0;
		zero_result_bit = 0;
		overflow_bit = 0;
		symbol_array = map <string, int>();
		symbol_array_ptr = 0;
		memory_ptr_data = 127; // 0 to 127 locations are for storing program source code 
		memory_ptr_code = 0; 
	}

	int Hardware::getNextMemorySpace(string caller)
	{
		if (caller == "source code")
		{
			return Hardware::memory_ptr_code;
		}
		else if (caller == "data")
		{
			return Hardware::memory_ptr_data;
		}
		else
			return NULL;
	}

	void Hardware::print()
	{
		cout << "Accumulator = " << register_a << "\n";
		cout << "Additional register = " << register_b << "\n";
		cout << "Program Counter = " << program_counter << "\n";
		cout << "Zero Result Bit = " << zero_result_bit << "\n";
		cout << "Overflow Bit = " << overflow_bit << "\n";
		// TODO print symbol array and memory

	}

	void Hardware::load_to_memory(string instruction_set)
	{
		memory[memory_ptr_code] = instruction_set;
		memory_ptr_code++;
	}




