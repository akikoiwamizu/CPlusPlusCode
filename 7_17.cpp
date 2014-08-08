// 7/17/2014

#include <fstream>
#include <iostream>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main()
{
    int age;
    string name;
    fstream fs("personal", ios::in); // opens the file "personal"
    if(fs.fail()) die("Something wrong."); // checks if the file was opened successfully or not
    while(!fs.eof()) // while the file is not over
    {
        fs >> name >> age; // read and get the variables for name and age
        cout << name << "\t" << age << endl; // \t = tab
    }
    /* ANOTHER WAY: READING LINE BY LINE
    string line;
    while(getline(fs, line)) // getline returns FALSE when there is no more data
    {
        cout << line << endl;
    }
    */

    fs.close(); // when you are done with the file, YOU MUST CLOSE IT!
    return 0;

    /*
    fstream fs("myfile", ios::in); // if you want to read a file use this (input stream)
    fstream fs("myfile", ios::out); // is you want to write to a file use this (output stream)
    fstream fs("myfile", ios::out | ios::in); // to read and write to a file at the same time
    fstream fs("myfile", ios::app); // to append to the file
    fstream fs("myfile", ios::in | ios::binary); // to read the file and can access binary files(any non-.txt files but txt files still work)

    // HOW TO READ FROM A FILE
    getline(ifs, line); // gets the lines from the file (ie. getline(cin, line)
    ifs.get(c); // gets a variable from the file
    ifs >> age; // reads the file and puts data into the variable age
    ifs.put(c); // puts char c into the file
    ifs << line; // puts line of line into the file
    //cin >> name >> age >> job;
    */

    /* POINTERS
    fs >> x;(where x = "l") and the pointer takes the next word
    */
}

// FUNCTION USED TO RECOGNIZE WHEN THERE IS NO MORE DATA TO READ IN A FILE
bool eof() // "End of the File" will return true if the file ends
{

}

// FUNCTION THAT HELPS MOVE THE FILE POINTER TO WHEREVER YOU LIKE IN THE FILE
// ie. fs.seekg(5, ios::beg); (go to location 5 from the beginning of the file
// ie. fs.seekg(3, ios::cur); (at the current location the pointer is in, move the pointer 3 bytes to the right
// ie. fs.seekg(-5, ios::cur); (from the current location of the pointer, move the pointer back 5 spaces
// ie. fs.seekg(0, ios::end); (put the pointer at the last location of data in the file)
// ie. fs.seekg(12, ios::end); (put the pointer 12 bytes past the end of the file)
// ie. fs.seekg(-20, ios::cur); (go back 20 bytes from where the pointer currently is located
seekg(long offset, int mode)
{

}
