/*Author: Akiko Iwamizu
Date: 07/22/2014
Extra Credit #2
Course: CS110A
Objective: Counts the number of characters, words, and lines in a file.*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <vector>
#define die(msg){cerr << msg << endl; exit(1);}
#define rewind(x) {x.clear(); x.seekg(0L, ios::beg);}
using namespace std;
//************************************main()****************************************
int main(int argc, char *argv[])
{
    fstream fs(argv[1], ios::in | ios::binary);
    if(argc < 2) die("Usage: myWC file1");
    if(!fs.is_open()) die("The file you chose could not be opened.");

    void lineCount(fstream &);
    void wordCount(fstream &);
    void charCount(fstream &);

    lineCount(fs);
    wordCount(fs);
    charCount(fs);
    cout << string(argv[1]) << endl;

    fs.close();
    return 0;
}
//************************************lineCount()*************************************
void lineCount(fstream &fs)
{
    rewind(fs);
    string line;
    int numLines = 0;
    while(getline(fs, line)) numLines++;
    cout << "  " << numLines << "  ";
}
//************************************wordCount()****************************************
void wordCount(fstream &fs)
{
    rewind(fs);
    vector<string> split(string s, char delimiter = ' ');
    string line;
    int totalWords = 0;
    while(getline(fs, line))
    {
        vector<string> vec = split(line);
        totalWords += vec.size();
    }
    cout << totalWords << "  ";
}
//************************************split()****************************************
vector<string> split(string s, char delimiter = ' ')
{
    string t;
    vector<string> v;
    stringstream ss;
    ss.str(s);
    if(isspace(delimiter))
    {
        while(ss >> t) v.push_back(t);
    }
    return(v);
}
//************************************charCount()****************************************
void charCount(fstream &fs)
{
    rewind(fs);
    fs.seekg(0L, ios::end);
    int numChars = fs.tellg();
    cout << numChars << "  ";
}
