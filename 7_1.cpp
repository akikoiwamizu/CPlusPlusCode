// 7/1/2014 Notes

#include <iostream>
// Macro:
// #define add(a,b) ((a) + (b))
//#define RAND(a,b) (a+rand() % (b-a+1)) // need for rolling a random # between a and b
#include <cstdlib>

using namespace std;


// PROTOTYPING
double average(double , double , double ); // EXAMPLE OF PROTOTYPING (Before main() and After header files)!!
int myRand(int , int);
int sumOf3Numbers(int , int); // PASS BY VALUE
void swap(int &, int &); // PASS BY REFERENCE
void doubleIt(int &); // PASS BY REFERENCE
int doIt();

// FUNCTIONS vs. MACROS
// Function:
int add(int a, int b) // This has the same use as the MACRO defined above
{
    int sum = a + b;
    return(sum);
}


// Function that determines if a number is even and returns true or false
bool isEVEN(int num) // NUM is the FORMAL PARAMETER
{
    return(num%2 == 0);
}
bool isODD(int num) // NUM is the FORMAL PARAMETER
{
    return(!isEVEN(num));
}


int main()
{
    int n;
    cout << "sum = " << add(4,16) << endl; // sum = 20
    cout << "give me a number: ";
    cin >> n;

    if(isEVEN(n)) // n is the ACTUAL PARAMETER
    {
        cout << n << " is an even number." << endl;
    }
    if(isODD(n))
    {
        cout << n << " is an odd number." << endl;
    }

    // Prototyping example
    cout << "avg is: " << average(2, 2, 3) << endl;

    // Prototyping example 2
    for(int i = 0; i < 5; i++)
    {
        cout << myRand(1,6) << endl;
    }

    // Prototyping example 3
    int x = sumOf3Numbers(1,10);
    cout << "sum of 3 numbers is: " << x << endl;


    // SWITCHING VALUES OF VARIABLES
    int a = 9;
    int b = 5;
    // HOW TO SWITCH:
    int temp = a; // temp = 9
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    //USING THE FUNCTION SWAP
    int c = 3;
    int d = 4;
    swap(c,d);
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    //USING THE DOUBLEIT FUNCTION
    int num = 5;
    cout << "before calling the function num = " << num << endl;
    doubleIt(num);
    cout << "after calling the function num = " << num << endl;


    //USING THE doIT Function
    int e = 10, f = 14; // GLOBAL VARIABLES
    int g = doIt();
    cout << e << " " << f << " " << g << endl;

    return 0;
}


//PROTOTYPING
double average(double x, double y, double z)
{
    double avg = (x + y + z)/3.0;
    return(avg);
}

// FINAL EXAM QUESTION: Function for the RAND(a,b) MACRO!!!
int myRand(int a, int b)
{
    int num = (a+rand() % (b-a+1));
    return(num);
}

int sumOf3Numbers(int a, int b)
{
    return(myRand(a,b)+myRand(a,b)+myRand(a,b));
}

// FINAL EXAM QUESTION WHERE YOU SWAP VALUES OF VARIABLES
void swap(int &c, int &d) // PASS BY REFERENCE
{
    int temp = c;
    c = d;
    d = temp;
    cout << "inside swap, c = " << c << " d = " << d << endl;
}

// DoubleIt Function: Double the value of the variable
void doubleIt(int &num) // PASS BY REFERENCE
{
    num *= 2;
    cout << "inside doubleIt num = " << num << endl;
}

// doIT function
int doIt()
{
    int x;
    int e = 100, f = 200; // LOCAL VARIABLES
    x = e + f;
    return(x);
}
