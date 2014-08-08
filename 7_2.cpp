// 7/2/2014

#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype> //Has a bunch of macros

using namespace std;
int add(int, int);
int mult(int, int);
double add(double, double);
double mult(double, double);
string repeat(string, int);
int area(int, int);
int area(int = 4, int = 6); // CAN EITHER DO IT IN THE PROTOTYPE OR THE ACTUAL FUNCTION
double youPay(double, double = 8.75/100);
char a2c(int);
int c2a(char);
int char2num(char);

//*****************************************************main()*********************************************************
int main()
{
    double num1 = 8.1, num2 = 6.2;
    cout << add(num1, num2) << endl;
    cout << mult(num1, num2) << endl;

    string name = "John";
    string s = "Hello ";
    string t = s + name; //CONCATENATION
    cout << t << endl;

    string r = repeat("Hi", 5);
    string stars = repeat("*", 20);
    cout << stars << endl;
    cout << r << endl;

    int a = area(10, 12);
    int b = area(5, 4);
    // int c = area(5) AND c = area() is an error because there aren't enough arguments UNLESS there are DEFAULTS
    int c = area(); // uses defaults in the prototype
    cout << "Area is: " << a << endl;
    cout << "Area is: " << b << endl;
    cout << "Area is: " << c << endl;

    cout << "You pay: " << youPay(10, 4.2/100) << endl; // substitute the actual parameter with the default!
    cout << "You pay: " << youPay(5) << endl; // Do not need to write a second parameter because TAX has a default

    char d;
    cout << "give me a lower case letter: ";
    cin >> d;
    if(!islower(d))
    {
        cerr << "Invalid. Lower case letters only." << endl;
    }
    else cout << d << " is: " << c2a(d) << endl;

    char f = '7';
    //int g = '7' - '0'; // (55 - 48 = 7) CONVERTING FROM ASCII # TO ACTUAL #
    cout << char2num(f) << endl;


    return 0;
}
//*****************************************************add()*********************************************************
//<global> these are necessary when using ICPP
int add(int a, int b)
{
    return(a + b);
}
//*****************************************************mult()*********************************************************
int mult(int a, int b)
{
    return(a * b);
}
//</global>
//*****************************************************add()*********************************************************
double add(double a, double b) //EXAMPLE OF OVERLOADING, Same name of function but multiple data types
{
    return(a + b);
}
//*****************************************************mult()*********************************************************
double mult(double a, double b)
{
    return(a * b);
}
//*****************************************************repeat()*********************************************************
string repeat(string s, int n)
{
    string str = ""; // INITIALIZING str with NULL
    if(n <= 0)
    {
        cerr << "Invalid input.";
        exit(1);
    }
    for(int i = 0; i < n; i++)
    {
        str += s;
    }
    return(str);
}
//*****************************************************area()*********************************************************
int area(int width, int length) //THESE ARE DEFAULT VALUES, SO THAT IF YOU DO NOT HAVE ACTUAL PARAMETERS IT USES THESE
{
    return(width * length);
}
//*****************************************************youPay()*********************************************************
double youPay(double price, double tax)
{
    return(price + (price * tax));
}
//*****************************************************alpha()*********************************************************
// FINAL EXAM QUESTION: In the function alpha doing cout << alpha(5);, cout << alpha(); cout  << alpha(9,2);
// What kind of function is it??
/* Answer 1: A function with default parameters
double alpha(int a = 9, int b = 5)
{
    return((double) a / b);  //Casting to a double
}
//Answer 2: An overloaded function
double alpha(int a, int b)
{
    return((double) a / b);
}
double alpha(int a)
{
    return((double) a);
}
double alpha()
{
    return(0.0);
}
*/
//*****************************************************a2c()*********************************************************
char a2c(int n)
{
    if(n < 0 || n > 127)
    {
        cerr << "Invalid ASCII value. 0-127 only" << endl;
        exit(1);
    }
    return((char) n); // CASTING the number into a character
}
//*****************************************************c2a()*********************************************************
int c2a(char c)
{
    return((int) c);
}
//*****************************************************repeat()*********************************************************
//FINAL EXAM QUESTION: Write this function, char2num
int char2num(char c)
{
    if(!isdigit(c))
    {
        cerr << "Invalid digit." << endl;
        exit(1);
    }
    return(c - '0');
}
