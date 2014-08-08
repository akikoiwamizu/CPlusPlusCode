// Writing to a file example
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main(int argc, char *argv[])
{
    bool exists(string);

    // EXAMPLE: kat abcd xyz    // where abcd and xyz are files and kat is the program
    if(argc == 1) die("Usage: " + string(argv[0]) + " file1 file2 ..."); // must convert argv[0] (cstring) to a string to concatenate it
    for(int i = 1; i < argc; i++)
    {
        string fname = string(argv[i]);
        if(!exists(fname))
        {
            cerr << fname + " does not exist.\n";
            continue;
        }
        ifstream ifs(fname.c_str()); // opens the file and converts cstring to string
        string line;
        cout << "------------------" << fname << "-------------------" << endl; // displays the file name before viewing the list!
        while(getline(ifs, line)) // as long as we have a file do ...
        {
            cout << line << endl;
        }
        ifs.close(); // closes the file!
    }
}

bool exists(string fname) // FILE NAME IS A C-STRING SO YOU MUST CONVERT IT!
{
    ifstream ifs(fname.c_str()); // this opens the file and converts it (if it exists, then ifs returns a zero)
    return(ifs != 0);
}
