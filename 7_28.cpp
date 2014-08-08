// 7/28/2014
#include <iostream>
#include <cstdio>
#include <cstdlib>
//#include <unistd> // doesn't exist for windows...
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main(int argc, char *argv[]) // argc and argv are nomenclature and can be named anything
{
    // EXAMPLE OF STUB
    int doit(int);
    void dothat(double);
    char never();
    int x = doit(5);
    dothat(2.9);
    char k = never();

    // REMOVE FILE EXAMPLE
    int remove(filename); // where filename is cstring and returns 0 if it can successfully delete the file (otherwise returns -1)

    if(argc < 2) die("Usage: delete file1 file2 ...");
    for(int i = 1; i < argc; i++)
    {
        if(remove(argv[i]) == -1) // if it cannot remove the file then throw error
        {
            cerr << "Cannot delete " + string(argv[i]); // MUST CONVERT TO STRING // DO NOT USE DIE b/c you don't want to exit program
                                                        // prematurely by not deleting the subsequent files
        }
        remove(argv[i]);
    }

    // RENAME FILE EXAMPLE
    int rename(oldname, newname); // 0 = success, -1 = failure
    if(rename("goody", "baldy") == -1) die("Cannot rename files");

    // TRUNCATE FILE EXAMPLE
    int truncate(filename, size); // to make a file smaller
    if(truncate("myfile", 2000) == -1) die("Cannot truncate file"); // can either expand or shrink file

}

int doit(int n)
{
    return(n);
}
void dothat(double d)
{

}
char never()
{
    return('A');
}


/*
int main()
{
    int x = 0;
    string line = "hi";
    if(debug) cout << "x = " << x << endl;
    if(debug) cout << "line = " << line << endl;
}

#if 0
any information that is contained in this sandwich is ignored...
this is used to disable lines
to enable them change 0 to 1 (0 = exclude, 1 = include)
#endif


#if DEBUG //(if this macro exists then create a variable and set it to true)
    bool debug = true;
#else
    bool debug = false;
#endif // DEBUG

// when compiling program in debugging mode in the shell: g++ -D DEBUG hw6.cpp (where DEBUG is a constant)
// this activates the macro "DEBUG"
*/
