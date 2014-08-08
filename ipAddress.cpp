/*
Author: Akiko Iwamizu
Date: 07/1/2014
Homework#4 (Extra Credit)
Course: CS110A
Objective: This program uses a function that generates IP addresses
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#define RAND(a,b) (a+rand() % (b-a+1))

using namespace std;
void ipGen(int);

//**************************************main()******************************************
int main()
{
    int num;
    cout << "Enter a number of IP Addresses: ";
    cin >> num;
    ipGen(num);
    return 0;
}
//**************************************ipGen()*****************************************
void ipGen(int n)
{
    srand(time(NULL));
    if(n <= 0)
    {
        cerr << "I'm sorry, but that is an invalid entry." << endl;
        exit(1);
    }
    for(int i = 0; i < n; i++)
    {
        int num1 = RAND(0, 255);
        int num2 = RAND(0, 255);
        int num3 = RAND(0, 255);
        int num4 = RAND(0, 255);
        cout << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
    }
}
