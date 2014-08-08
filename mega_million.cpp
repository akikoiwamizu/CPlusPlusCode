/*Author: Akiko Iwamizu
Date: 07/14/2014
Homework#5
Course: CS110A
Objective: This program simulates a lotto ticket printer.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "qsort.h"
#define ticketHeader cout << "-MEGA MILLION LOTTO TICKET-" << endl;
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;
//************************************main()****************************************
int main(int argc, char *argv[])
{
    if(argc == 1) die("Please use this format: " + string(argv[0]) + " # of tickets.");
    int tixAmt = atoi(argv[1]);
    if(tixAmt <= 0) die("I'm sorry, but that is an invalid entry.");
    cout << "Amount of tickets you ordered: " << tixAmt << endl;
    void fillArray(int);
    fillArray(tixAmt);
    return 0;
}
//************************************fillArray()************************************
void fillArray(int tixAmt)
{
    int lottoNums[5];
    int megaNum[1];
    srand(time(0));
    char c = 'A';
    void removeDups(int x[], int n);
    void printArray(int x[], int y[], int n, int m);
    ticketHeader;
    for(int k = 0; k < tixAmt; k++)
    {
        if(c > 'J')
        {
            cout << endl;
            c = 'A';
            ticketHeader;
        }
        cout << c++ << ": ";
        removeDups(lottoNums, array_size(lottoNums));
        Qsort(lottoNums, 0, array_size(lottoNums)-1);
        printArray(lottoNums, megaNum, array_size(lottoNums), array_size(megaNum));
    }
}
//**********************************removeDups()****************************************
void removeDups(int x[], int n)
{
    bool check[57];
    for(int h = 0; h < array_size(check); h++) check[h] = false;
    for(int i = 0; i < n; i++)
    {
        x[i] = myrand(1,56);
        while(check[x[i]] == true) x[i] = myrand(1,56);
        check[x[i]] = true;
    }
}
//**********************************printArray()****************************************
void printArray(int x[], int y[], int n, int m)
{
    for(int k = 0; k < n; k++)
    {
        if(x[k] < 10) cout << "0" << x[k] << " ";
        else cout << x[k] << " ";
    }
    for(int j = 0; j < m; j++)
    {
        y[j] = myrand(1,46);
        if(y[j] < 10) cout << " mega number: " << "0" << y[j];
        else cout << " mega number: " << y[j];
    }
    cout << endl;
}
