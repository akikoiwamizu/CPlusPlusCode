// my_cp.cpp
// copies a file to a newly created file in shell
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main(int argc, char *argv[])
{
    int count(string);
    if(argc < 3) die("usage my_cp from_file1 to_file2");
    string fromFile = string(argv[1]);
    string toFile = string(argv[2]);
    if(!exists(fromFile)) die(fromFile + " does not exist.");
    ifstream ifs(fromFile.c_str()); //reads from first file
    ofstream ofs(toFile.c_str()); // write in second file
    string line;
    while(getline(ifs, line)) ofs << line << endl; // write the line in fromFile into toFile
    ifs.close();
    ofs.close();
}

// TO CHECK IF THE FILE EXISTS
bool exists(string fname) // FILE NAME IS A C-STRING SO YOU MUST CONVERT IT!
{
    ifstream ifs(fname.c_str()); // this opens the file and converts it (if it exists, then ifs returns a NONzero)
    return(ifs != 0);
}
