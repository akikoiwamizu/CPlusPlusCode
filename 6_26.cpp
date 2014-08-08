// 6/26/14 Notes

#define RAND(a,b) (a+rand() % (b-a+1)) // defining a MACRO finding a random # between a and b
#define loop(n) for(int i = 0; i < n; i++) // could be used to simplify the program
#include <cstdlib> //needed for rand()
#include <ctime> // needed for time(NULL)
#include <iostream>
#include <iomanip> // input output manipulation -- in order to use setw()

using namespace std;

int main()
{
    int counter = 0;
    int num;
    srand(time(NULL)); // THIS LINE GUARANTEES NO REPETITION

    //simulating a counter for how many sixes are rolled in a die when tossed 10 times
    for(int i = 0; i < 10; i++)
    {
        num = RAND(1,6);
        if(num == 6)
        {
            counter++;
        }
    }
    cout << "You got: " << counter << endl;


    // simulating a pair of dice. counter increases when both dice are sixes
    int counter2 = 0;
    int num2;
    for(int i = 0; i < 10; i++)
    {
        num = RAND(1,6);
        num2 = RAND(1,6);
        if(num == 6 && num2 == 6) // OR if(num+num2 == 12)
        {
            counter++;
        }
    }
    cout << "You got: " << counter2 << endl;


    // this game uses <iomanip> -- useful tricks
    int x = 5, y = 9, z = 6;
    cout << x << y << z << endl; //596 -- BAD
    cout << setw(5) << x << setw(5) << y << setw(5) << z << endl; //     5     9     6

    double d = 76.9238;
    cout << setprecision(4) << d << endl; // 76.92
    double num1 = 827.698412;
    cout << num1 << endl; //827.7 setprecision() is in effect throughout the entire program once instituted

    int q = 928762996; // will be displayed as 9287E+7
    cout << q << endl;
    cout << fixed << q << endl; // ignores scientific notation

    // how to force the output to always give digits after the .
    int number = 7;
    cout << showpoint << number << endl; // always gives a decimal place
    cout << fixed << setprecision(3) << number << endl; // gives 7.000 only works on digits after the decimal point

    int foo = 56;
    cout << setw(5) << foo << endl;

    string name = "Abbas";
    cout << setw(7) << name << endl; //_ _ Abbas only 2 blanks
    cout << left << setw(7) << name << endl;

    return 0;
}
