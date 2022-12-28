#include <iostream>
#include <fstream>
#include <string>
#include "DEC.h"
#include "LDA.h"
#include "LDB.h"
#include "LDI.h"
#include "STR.h"
#include "XCH.h"
#include "JMP.h"
#include "JZS.h"
#include "JVS.h"
#include "ADD.h"

using namespace std;

Instr instruction_execution(string instruction, string argument, Instr instr)
{
    if (instruction == "DEC")
    {
        DEC dec = DEC(argument);
        dec.execute();
    }
    if (instruction == "LDA")
    {
        LDA lda = LDA(argument);
        lda.execute();
    }
    if (instruction == "LDB")
    {
        LDB ldb = LDB(argument);
        ldb.execute();
    }
    if (instruction == "LDI")
    {
        LDI ldi = LDI(argument, instr.hardware);
        ldi.execute();
    }
    if (instruction == "STR")
    {
        STR str = STR(argument);
        str.execute();
    }
    if (instruction == "XCH")
    {
        XCH xch = XCH(argument);
        xch.execute();
    }
    if (instruction == "JMP")
    {
        JMP jmp = JMP(argument);
        jmp.execute();
    }
    if (instruction == "JZS")
    {
        JZS jzs = JZS(argument);
        jzs.execute();
    }
    if (instruction == "JVS")
    {
        JVS jvs = JVS(argument);
        jvs.execute();
    }
    if (instruction == "ADD")
    {
        ADD add = ADD(argument);
        add.execute();
    }
    return instr;
}

int main()
{
    char* filename = new char[100];
    cout << "Please enter a file name.\n";
    cin >> filename;
    strcat_s(filename, sizeof(filename), ".txt");
    cout << "Your filename is " << filename << "\n";
    
    //read the file
    fstream myfile (filename);
    string myline;
    Instr instr = Instr();

    while (getline (myfile, myline))
    {
        instr.hardware.load_to_memory(myline);
    }


    //command loop 
    bool stop = false;
    int instruction_count = 0;
    string input, instruction_set, instruction, argument;
    while (!stop)
    {
        cout << "Please enter command\n";
        cin >> input;
        cout << "\n";
        if(input == "s")
        {
            instruction_set = instr.hardware.memory[instr.hardware.program_counter];
            instruction = instruction_set.substr(0, 3);
            if (instruction_set.length() > 4)
            {
                argument = instruction_set.substr(4, instruction_set.length()-1);
            }
            else
            {
                argument = "";
            }
            instr = instruction_execution(instruction, argument, instr);
            instr.hardware.program_counter++;
            instr.hardware.print();
        }
        else if (input == "a")
        {
            while (instruction_count != 1000 || instruction == "HLT")
            {
                instruction_set = instr.hardware.memory[instr.hardware.program_counter];
                instruction = instruction_set.substr(0, 3);
                if (instruction_set.length() > 4)
                {
                    argument = instruction_set.substr(4, instruction_set.length() - 1);
                }
                else
                {
                    argument = "";
                }
                instr = instruction_execution(instruction, argument, instr);
                instruction_count++;
                instr.hardware.program_counter++;
            }
            instr.hardware.print();
        }
        else if (input == "q")
        {
            stop = true;
        }
        else
        {
            cout << "Incorrect command";
        }
    }



}


