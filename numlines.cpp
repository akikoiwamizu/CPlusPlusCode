// numlines.cpp
// counts the num of lines in a file
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main(int argc, char *argv[])
{
    int count(string);
    if(argc < 2) die("usage numlines file1 file2 ...");
    string fname;
    int sumOfLines = 0;
    for(int i = 1; i < argc; i++) // start from 1 because we are not starting from "numlines" but the file written after it in the command line
    {
        fname = string(argv[i]);
        cout << fname << " : " << count(fname) << " lines." << endl;
        sumOfLines += count(fname);
    }
    cout << "Sum of all lines: " << sumOfLines << endl;
}

// function that counts the number of the lines
int count(string fname)
{
    bool exists(string);
    if(!exists(fname)) die(fname + " does not exist.");
    ifstream ifs(fname.c_str());
    string line;
    int c = 0;
    while(getline(ifs, line)) c++;
    ifs.close();
    return(c);
}

// TO CHECK IF THE FILE EXISTS
bool exists(string fname) // FILE NAME IS A C-STRING SO YOU MUST CONVERT IT!
{
    ifstream ifs(fname.c_str()); // this opens the file and converts it (if it exists, then ifs returns a NONzero)
    return(ifs != 0);
}
