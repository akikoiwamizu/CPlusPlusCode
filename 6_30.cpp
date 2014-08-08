// 6/30/2014

//MACROS

#define PROMPT(msg) cout << msg
#define CLR_SCR for(int i = 0; i <= 25; i++) cout << endl //Looping 25 times so that the screen is cleared
#define SQR(x) ((x)*(x)) // should have the two parentheses to insure that the operations are done
#define CUBE(x) (x)*SQR(x)
#define UPPER(x) ((x >= 97 && x <= 122)?(x-32):x);
#define LOWER(x) ((x >= 65 && x <= 90)?(x+32):x);
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

    //FUNCTIONS (Does not return a result)
    void stars(int n) // (int n) is an argument/parameter
    {
        if(n <= 0)
        {
            cerr << "Invalid input.";
            exit(1);
        }
        for(int i = 0; i <= n; i++)
        {
            cout << '*';
        }
        cout << endl;
    }

    //MORE FUNCTIONS (returns a value)
    double average(double d1, double d2, double d3)
    {
        double avg = (d1 + d2 + d3)/3.0;
        return(avg); //should return the same data type
    }

int main()
{
    CLR_SCR;

    stars(20);
    stars(35);
    cout << "functions are very important in C++." << endl;

    double v = average(3.9, 4.2, 1.8);
    cout << v << endl;

    cout << SQR(4) << endl;
    cout << SQR(3+1) << endl;

    double number = 54321.333;
    cout << setprecision(6) << number << endl;

    // lower case to upper case and vice versa
    char p = UPPER(99);
    cout << p << endl;
    char o = LOWER(66);
    cout << o << endl;


    // NESTED LOOPS: multiply the limits for i and j to get the total runs
    int N = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            N++;
        }
    }
    cout << "N = " << N << endl;


    // FINAL QUESTION:What is the output?
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= i+1; j++)
        {
            cout << '.';
        }
        cout << endl;
    }

    int n;
    cout << "Give me a number between 1 and 5: ";
    cin >> n;
    if(n == 1) cout << "one\n";
    else if (n == 2) cout << "two\n";
    else if (n == 3) cout << "three\n";
    else if (n == 4) cout << "four\n";
    else if (n == 5) cout << "five\n";
    else cerr << "Invalid number, sorry. Only 1-5 are valid.\n";

    //SWITCH STATEMENTS

    int m;
    cout << "Give me a number between 1 and 5: ";
    cin >> m;
    switch(m) //for switch statements you can only use INT(int, long, short) family or CHAR family
    {
        case 1: cout << "one\n"; break;
        case 2: cout << "two\n"; break;
        case 3: cout << "three\n"; break;
        case 4: cout << "four\n"; break;
        case 5: cout << "five\n"; break;
        default: cerr << "Invalid input.\n"; //All other cases are errors! Do not need to use a break;
    }


    // USE CAN MIX CASES TOGETHER
    int r;
    cout << "Give me a number between 1 and 10: ";
    cin >> r;
    switch(r)
    {
        case 1: case 3: case 5: case 7: case 9: cout << "ODD\n"; break;
        case 2: case 4: case 6: case 8: case 10: cout << "EVEN\n"; break;
        deafult: cerr << "Invalid input.\n";
    }

    // CHAR AND INT
    char x = 65;
    cout << x << endl; // prints out 'A' because 65 = A in computer

    int y = 'B';
    cout << y << endl; // prints 66





    return 0;

}






