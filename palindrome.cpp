/*
Author: Akiko Iwamizu
Date: 07/9/2014
Homework#4
Course: CS110A
Objective: This program identifies if the input is a palindrome.
*/
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

//************************************main()****************************************
int main()
{
    string s;
    cout << "Please enter the palindrome you would like to test: ";
    getline(cin, s);
    if(s.empty())
    {
        die("You entered nothing. I'm sorry, but that is an invalid entry.");
    }
    bool isPalindrome(string);
    if(isPalindrome(s)) cout << s << " is a palindrome.\n";
    else cout << s << " is not a palindrome.\n";
    return 0;
}
//************************************upper()***************************************
string upper(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
    cout << s << endl;
    return(s);
}
//************************************punct()***************************************
string punct(string s)
{
    string noPunct = "";
    for (int i = 0; i < s.size(); i++)
    {
        if(isalnum(s[i]))
        {
            noPunct += s[i];
        }
    }
    s = noPunct;
    cout << s << endl;
    return(s);
}
//************************************reverseSent()*********************************
string reverseSent(string s)
{
    char reverseWord;
    int length = s.size();
    for(int i = 0; i < length/2; i++)
    {
        reverseWord = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = reverseWord;
    }
    return(s);
}
//************************************isPalindrome()********************************
bool isPalindrome(string s)
{
    string upper(string);
    string punct(string);
    string reverseSent(string);
    string t = upper(punct(s));
    return(t == reverseSent(t));
}
