// echo I love summers
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

// EXAMPLE OF CSTRING: echo I love summers
int main(int argc, char *argv[])
{
    string s;
    for(int i = 1; i < argc; i++) //start from 1 because argc counts the command (the first thing entered)
    {
        s = string(argv[i]); // converting from an array of characters to a string {I, \0} --> "I"
        cout << s << " "; // the space is to create a manual space for the phrase
    }
    cout << endl;
    return 0;
}
// g++ eko.cpp -O3 -o eko
// strip eko
// eko I like C++
// eko *.cpp
