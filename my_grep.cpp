// files that simulates the command grep in linux
// Want to make the function that does: Grep -l "any target" file(s)
// type in shell: my_grep "target" file1 file2 file3...
// will display the file names with the "target" in them
// IE) mygrep "Abbas" *
    // "Abbas" = argv[1]
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main(int argc, char *argv[])
{
    if(argc <= 2) die("usage: mygrep target file1 file2 ..."); //command line check: makes sure there is more than "grep target" written
    string target =  string(argv[1]); // converting argv[1] to a string and naming it the variable target
    string fname;

    bool find_target(string, string);
    for(int i = 2; i < argc; i++) // i = 2 because we dont need to consider argv[0] ot argv[1] which are "grep target"
    {
        fname = string(argv[i]); // remember to convert argv because it needs to be converted from cstring to string!
        if(find_target(fname, target)) cout << "fname" << endl;
    }
    return 0;
}

// a function that reads through the files in the directory and searches for the "target"
bool find_target(string fname, string target)
{
    //must first check if the file exists
    bool exists(string);
    if(!exists(fname)) return(false);
    ifstream ifs(fname.c_str()); // converts fname to a string since "ifs" is a cstring and opens the fname file !!!!!!!!!!
    string line;
    while(getline(ifs, line)) // this reads line by line of the file and puts it in the string
    {
        if(line.find(target, 0) != string::npos) // if the file exists then find the target at index 0 inside of the string line
        {
            ifs.close(); // closes the file
            return(true);
        }
    }
    ifs.close();
    return(false); // so if the target is not found then it closes the file and continues to the next file
}

// TO CHECK IF THE FILE EXISTS
bool exists(string fname) // FILE NAME IS A C-STRING SO YOU MUST CONVERT IT!
{
    ifstream ifs(fname.c_str()); // this opens the file and converts it (if it exists, then ifs returns a NONzero)
    return(ifs != 0);
}
