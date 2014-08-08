// 7/8/20149 12
// THIS IS AN ECHO PROGRAM THAT SUMS INPUT ENTERED ON THE COMMAND LINE ARGUMENT
#include <string>
#include <cstring>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    int sum = 0;
    if(argc > 1)
    {
        for(int i = 1; i < argc; i++) //start from 1 because argc counts the command (the first thing entered)
        {
            sum = atoi(argv[i]); // converting from an array of characters to a string {I, \0} --> "I"
        }
        cout << "The sum of the numbers you entered is: " << sum << endl; // the space is to create a manual space for the phrase
    }
    return 0;
}
// g++ eko.cpp -O3 -o eko
// strip eko
// eko I like C++
// eko *.cpp
