// mkfile has 2 arguments: filename, size

#include <iostream>
#include <unistd>
#include <cstdlib>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;

int main(int argc, char *argv[])
{
    if(argc != 3) die("Usage: mkfile filename filesize");
    int size = atoi(argv[2]); // ASCII to INTEGER (converts to number (c-string # to string #))
    if(truncate(argv[1], size) == -1) die("truncate failed.");
}
