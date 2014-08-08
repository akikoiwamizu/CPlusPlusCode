// 7/15/2014
/* new functions available on pub directory
FINAL EXAM QUESTION: give the names of 10 files in the pub directory?
- icpp
- mkc++
- mkheader
- syllabus
- demo_sub.cpp
- dice_game.cpp
- CoinMachine.cpp
- copy
- hw2
- mkcpp
- qsort.h
*/

/* HW5 HELP:
mega_million 6 // handling the command line where 6 goes to argv[1] as a cstring

int main(int argc, char *argv[])
{
    if(argc == 1) die("usage: " + string(argv[0]) + " number of tickets.\n"); // where argc == 1 && argv[0] is "mega_million"
    int n = atoi(argv[1]); // where n is the # of tickets
}


//HOW TO CONVERT AN INT TO A STRING USING TERNARY OPERATOR
for(int i = 0; i < 5; i++)
{
    cout << ((x[i] < 10)?"0":"") << x[i] << endl;
    // Another version: cout << pad_zero(x[i]) << endl;
}

*/
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <fstream> // used for file handling
#define RAND(a,b) (a+rand() % (b-a+1))
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main(int argc, char *argv[])
{
    /* SYSTEM FILE CODE
    string program_name();
    cout << "name of my program: " << arv[0] << endl; // gives the name of the executable program g++ lotto.cpp -o my_lotto: ./my_lotto
    cout << "name of my c++ program: " << __FILE__ << endl; // 2 underscore at beginning and end: ./my_lotto.cpp
    cout << "my file name is: " << program_name() << endl; // my_lotto.cpp
    */

    bool exists(string);
    string fname;
    cout << "Give me a file name: ";
    cin >> fname;
    if(!exists(fname))
    {
        die(fname + "does not exist.");
    }
    else cout << "Your file does exist.";

/*
    int mega;
    int x[5];
    int n = atoi(argv[1]);
    void fillup(int x[]);
    string pad_zero(int);

    for(int i = 0; i < n; i++)
    {
        fillup(x);
        mega = RAND(1,46);
        for(int j = 0; j < 5; j++)
        {
            cout << pad_zero(x[j]) << " ";
        }
        cout << pad_zero(mega) << endl;
    }
*/

    return 0;
}


/* HOW TO PRINT THE FILE NAME IN THE OUTPUT OF A PROGRAM
string program_name()
{
    string fname = __FILE__;
    int p = fname.rfind("/"); // look for the very last "/" in a directory "/usr/abbas/lotto.cpp"
    return(p != string::npos); // string::npos = "file is NOT found"
}
*/

// HOW TO CONVERT AN INTEGER TO A STRING USING "to_string()"
string to_s(int num)
{
    stringstream ss; // A NEW DATA TYPE
    ss << num;
    return(ss.str());
}

// HOW TO ADD LEADING ZEROES
string pad_zero(int num)
{
    string to_s(int); //must prototype because we are using it
    string s = to_s(num);
    return(num < 10)?"0"+s:s;
}

/* HOW TO FILL LOTTO ARRAY
void fillup(int num[])
{
    void bubble_sort(int [], int);
    bool already_created[57];
    for(int i = 0; i < 57; i++) already_created[i] = false;
    int n = 0, rnum;
    for(;;)
    {
        rnum = RAND(1,56);
        if(!already_created[rnum])
        {
            num[n++] = rnum;
            already_created[rnum] = true;
        }
        if(n == 5) break;
    }
    bubble_sort(num, 5);
}
*/

// TO CHECK IF THE FILE EXISTS
bool exists(string fname) // FILE NAME IS A C-STRING SO YOU MUST CONVERT IT!
{
    ifstream ifs(fname.c_str()); // this opens the file and converts it (if it exists, then ifs returns a NONzero)
    return(ifs != 0);
}
