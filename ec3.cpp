/*Author: Akiko Iwamizu
Date: 07/28/2014
Extra Credit #3
Course: CS110A
Objective: Capitalizes the first letter of each word in a string.*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//************************************main()****************************************
int main()
{
    string text = "    This   is    a      line of text  for capitalization!     ";
    string capitalize(string);
    cout << capitalize(text) << endl;
    return 0;
}
//*******************************capitalize()***************************************
string capitalize(string s)
{
    bool cap = true;
    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i]) && cap == true)
        {
            s[i] = toupper(s[i]);
            cap = false;
        }
        else if(isspace(s[i])) cap = true;
    }
    return(s);
}
