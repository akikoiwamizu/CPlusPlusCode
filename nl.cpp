// nl.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main(int argc, char *argv[])
{
    fstream fs(argv[1], ios::in); // argv[1] = file name
    if(!fs.is_open()) die(string(argv[1]) + " does not exist");
    string line;
    for(int i = 0; getline(fs, line); i++)
    {
        cout << setw(5) << i << line << endl;
    }
    fs.close();
}
