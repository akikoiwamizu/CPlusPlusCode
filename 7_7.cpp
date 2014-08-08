// 7/7/2014
#include <iostream>
#define array_size(x) sizeof(x)/sizeof(x[0]) // Macro for determining the array size
using namespace std;

int largest(int [], int); // prototyping the largest function with an array parameter
void reverseArray(int [], int);
string reverseString(string);
string revString(string);
//int examQ(int [], int []);

int main()
{
    int z[] = {5, 9, 12, 6, 18, 10};
    cout << "the largest number is: " << largest(z, array_size(z)) << endl;
    reverseArray(z, array_size(z));
    string s = "I love C++";
    reverseString(s);
    revString(s);
    //int y[] = {8, 16, 10, 30, 38, 18, 6, 11};
    //int x[] = {9, 7, 12, 16, 11, 30};
    //examQ(x,y);

    return 0;
}

// Largest function by passing an array into the formal parameter
int largest(int num[], int n) // user must specify how large the array is
{
    int biggest = num[0];
    for(int i = 1; i < n; i++) // you start at i=1 b/c we named biggest as the num[0] so it is already compared,SO you need to start from 1!
    {
        if(num[i] > biggest) biggest = num[i];
    }
    return(biggest);
}

// Question from FINAL EXAM-- Reverse Function that reverses an array
void reverseArray(int num[], int n) // cannot return an array, so this function is "VOID", the indexes are swapped n/2 times
{
    int tempArray;
    for(int i = 0; i < n/2; i++)
    {
        tempArray = num[i];
        num[i] = num[n-i-1];
        num[n-i-1] = tempArray;
    }
}

// How to reverse a string in an inefficient way
string reverseString(string s)
{
    string sum = "";
    for(int i = s.size()-1; i >= 0; i--) //looping backwards!
    {
        sum += s[i];
    }
    cout << "the reverse string: " << sum << endl;
    return(sum);
}

// How to reverse a string in an efficient way
string revString(string s)
{
    char temp;
    int length = s.size();
    for(int i = 0; i < length/2; i++)
    {
        temp = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = temp;
    }
    cout << "the efficient reverse string: " << s << endl;
    return(s);
}

/*FINAL EXAM question: write a program to find out how many elements in x[] are less than the average of the elts in y[]
int examQ(int x[], int y[])
{
    int sum = 0;
    for(int i = 0; i < s.size(); i++)
    {
        sum += y[i];
    }
    int avg = sum/s.size();
    cout << "avg is: " << sum << endl;

    int lessThan = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(x[i] < avg) lessThan++;
    }
    cout << "the number of elts in x[] that are less than the avg in y[] is: " << lessThan << endl;
    return(s);
}
*/

// EXAMPLE OF CSTRING: echo I love summers
int main(int argc, char argv[])
{
    string s;
    for(int i = 1; i < argc; i++) //start from 1 because argc counts the command (the first thing entered)
    {
        s = string(argv[i]); // converting from an array of characters to a string {I, \0} --> "I"
        cout << s << " "; // the space is to create a manual space for the phrase
    }
    cout << endl;
}
// g++ eko.cpp -O3 -o eko
// strip eko
// eko I like C++
// eko *.cpp
