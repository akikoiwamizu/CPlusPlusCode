// 7/8/2014
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <cstdlib>
#define die(msg) {cerr << msg << endl; exit(1);} //must use this for hw4
using namespace std;

string upper(string);
double power(double,double);


int main()
{

    string s = "hello";
    string x;
    x = upper(s);
    cout << x << endl;

    double k;
    k = power(2,5);
    cout << k << endl;

    int age;
    cout << "how old are you?";
    cin >> age;
    if(age <= 0) die("Invalid age");
    if(age > 120) die("Too optimistic!");

    string name;
    cout << "Your name: ";
    cin >> name;
    if(name.empty()) die("you forgot to type a name... ");

    int ipow(int, int);
    cout << ipow(2,3) << endl;

    int fact(int);
    int num;
    cout << "give me a num: ";
    cin >> num;
    if(num < 0) die("negative number not allowed.");
    cout << "factorial of " << num << " is " << fact(num) << endl;
    cout << fact(31) << endl;

    int stoi(string);
    string nums = "48"; // want to convert a STRING to an int
    int n = 2 * stoi(nums); // prints 96
    cout << "n = " << n << endl;

    int stod(string);
    string numb = "48";
    double m = 2.0 * stod(numb);
    cout << "double num = " << m << endl;

    return 0;
}

int stoi(string s)
{
    return(atoi(s.c_str()));
}

double stod(string s)
{
    return((double)atof(s.c_str()));
}

/*
void greet(string name) // a recursive function and an infinite loop
{
    cout << name << endl;
    greet(name); //RECURSION: when a function calls itself
}*/


//recursive FUNCTION for x^n = x * x^(n-1)
int ipow(int x, int n)
{
    if(n == 0) return(1);
    return(x * ipow(x, n-1));
}

//recursive factorial function
int fact(int n)
{
    if(n <= 1) return(1);
    return(n * fact(n-1));
}


/* MAIN FUNCTION FOR HW4

int main()
{
    bool isPalindrome(string);
    string sent;
    cout << "give me a string: ";
    getline(cin, sent);
    if(isPalindrome(sent)) cout << sent << " is a palindrome.\n";
    else cout << sent << "is not a palindrome.\n";
}*/

// UPPER FUNCTION FOR HW4
string upper(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return(s);
}

// MANUAL POWER FUNCTION
double power(double x, double y)
{
    double z;
    z = exp(y*log(x));
    return(z);
}
/*
// BOOL FUNCTION FOR HW4
bool isPalindrome(string s)
{
    string upper(string);
    string punct(string);
    string reverseSent(string);
    string t = punct(upper(s));
    return (t == reverseSent(t));
}*/

