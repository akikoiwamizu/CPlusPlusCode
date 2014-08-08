// 7/16/2014

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    /* QUIZ 2 QUESTION: Write the complete program called num_of_files.cpp that counts the # of files given on the command line
    num_of_files good bad ugly pretty (where argc = 5 since it includes the file name)
    where num_of_files * (gives the names of all files in the directory) */
    cout << "Number of file(s): " << (argc - 1) << endl;

    void counter();
    for(int i = 0; i < 9; i++)
    {
        counter();
    }
}

void counter()
{
    static int c = 0; // initializes the variable only once and keeps track of changes
    if(c >= 7) c = 0;
    cout << "I was called " << ++c << " time(s).\n";
}



