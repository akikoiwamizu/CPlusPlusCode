// 7/21/2014

#include <iostream>
#include <fstream>
#include <cstdlib>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main()
{
    fstream fs("love_letter", ios::in); // reads the file


    if(!fs.is_open()) die("love_letter did not open.");
        // other options:
        // if(fs.fail())...
        // if(!fs)...

    // File:
    // Hello John
    // I have some
    // problems with
    // c++.
    string str;
    fs.seekg(7L, ios::beg);
    fs >> str; // str = "John"
    fs.seekg(17L, ios::cur); // gets the word by first moving the # spaces specified then reading the word until the next whitespace
    fs >> str; // str = "problems"
    cout << fs.tellg() << endl; // would give location: 17L

    /* to WRITE to the file and replace John with Jack    fstream fs("friend", ios::out);
    if(!fs.is_open()) die("Cannot open file");
    fs.seekp(7L, ios::beg);
    fs << 'Jack'; // if you chose a longer name than it would overwrite some of the program

    */
    return 0;
}

long file_size(string fname) //gives the size of the file
{
    fstream fs(fname.c_str(), ios::in | ios::binary); // must convert string to cstring since fstream is for cstring! use binary to generalize
    if(!fs.is_open()) die("Cannot open " + fname);
    fs.seekg(0L, ios::end); // send the pointer to the end of the file
    long size = fs.tellg(); // sets the value of the location of the pointer to "size"
    fs.close(); // MUST close file
    return(size); // would return the location of the pointer = size of the file
}


/* POINTER NOTES
fname.seekg(long offset, int mode) // "get" means read
fname.seekg(0L, ios::beg) // set the pointer to the beginning of the file and point to location 0
fname.seekp(long offset, int mode) // "put" means write
long tellg() function // gives the location of your pointer at any moment
long tellp() function //
*/


/* QUIZ 2 SOLUTION
// QUESTION 1
int first(int x[], int n)
{
    int num = x[0];
    for(int i = 0; i < n; i++)
    {
        x[i-1] = x[i];
    }
    return(num);
}

// QUESTION 2
ofstream is destructive

// QUESTION 3
bool contains(string text, string target)
{
    return(text.find(target, 0) != string::npos); // find the target and check if the file exists
}

*/
