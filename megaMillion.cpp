/*
Author: Akiko Iwamizu
Date: 07/14/2014
Homework#5
Course: CS110A
Objective: This program simulates a lotto ticket printer.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "qsort.h"
#define ticketHeader cout << "-MEGA MILLION LOTTO TICKET-" << endl;
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

//************************************main()****************************************
int main()
{
    /* TESTING MODE
    bool asc = true;
    //void sortArray(int x[], int n);
    int x[] = {4, 7, 3, 1};
    //sortArray(x, 4);
    Qsort(x, 0, 3);
    for(int i = 0; i < array_size(x); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;

    bool isSorted(int x[], int n, bool ascend);
    if(isSorted(x, array_size(x), asc)) cout << "It is sorted." << endl;
    else cout << "It is not sorted." << endl;
    */

    int tixAmt;
    cout << "How many tickets would you like to purchase: ";
    cin >> tixAmt;
    if(tixAmt <= 0) die("I'm sorry, but that is an invalid entry.");

    void fillArray(int);
    fillArray(tixAmt);

}
//************************************fillArray()****************************************
void fillArray(int tixAmt)
{
    int lottoNums[5];
    int megaNum[1];
    srand(time(0));
    char c = 'A';
    bool asc = true;
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

        removeDups(lottoNums, 5);
        Qsort(lottoNums, 0, 4);
        printArray(lottoNums, megaNum, 5, 1);
        /*
        for(int k = 0; k < array_size(lottoNums); k++)
        {
            if(lottoNums[k] < 10) cout << "0" << lottoNums[k] << " ";
            else cout << lottoNums[k] << " ";
        }

        for(int j = 0; j < array_size(megaNum); j++)
        {
            megaNum[j] = myrand(1,46);
            if(megaNum[j] < 10) cout << " mega number: " << "0" << megaNum[j];
            else cout << " mega number: " << megaNum[j];
        }
        cout << endl;
        */
        bool isSorted(int x[], int n, bool ascend);
        if(isSorted(lottoNums, array_size(lottoNums), asc)) cout << "It is sorted." << endl;
        else cout << "It is not sorted." << endl;
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
//************************************isSorted()****************************************
bool isSorted(int x[], int n, bool ascend)
{
    for(int i = 0; i < n-1; i++)
    {
        if(x[i] > x[i+1]) ascend = false;
        else ascend = true;
    }
    return(ascend);
}
