// 7/24/2014
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include "screenio.h"
#define fRED cout << "\033[31m";
#define fYELLOW cout << "\033[33m";
#define RESET cout << "\033[2m";
#define bBlack cout << "\033[40m";
#define LOCATE(r,c) printf("\033[%d;%dH" , r, c); // any OS
#define locate(r,c) system("tput cup r c"); // a UNIX, LINUX, MAC only
#include <cstdlib>
#define rand(a,b) (a+rand() % (b-a+1))
#define CLS {cout << "\033[2J"; LOCATE(1,1);}
#define die(msg){RESET; LOCATE(24,1); fRED; cerr << msg; RESET;}  //goes to the last column and first row

using namespace std;

int main()
{
    int num = 5;
    printf("%02d \n", num); // this would make num a 2 digit number // prints : 05

    int num2 = 8;
    printf("%10d %10d %10d \n", num2, num2 + 1, num2 + 2); // prints: ____________8_____________9_______________10

    printf("%f \n", pow(2,5)); // prints a function // prints: 32.000000

    double num3 = 4927.8631;
    printf("%7.2f\n", num3); // where 7 means 7 total "spaces filled"(would add spaces if there are more digits),
                            // and only 2 decimal points // prints: 4927.86 where totalIndex = 7 (includes period) SETPRECISION REPLACEMENT

    //cout << "\033[31m"; // "\033" is a scape char , prints RED
    fRED;
    cout << "Hello John\n";
    fYELLOW;
    cout << "Akiko's favorite color\n";
    RESET;

    // locate
    LOCATE(10,60);
    fRED;
    cout << "Hi Red...";
    RESET;

    CLS;

    LOCATE(4,30);
    fBLUE;
    cout << "student's program";
    RESET;
    fGREEN;
    box(6,25, 17,60);
    //box(r1, c1, r2, c2, cv, ch) // cv = vertical char, ch = horizontal char
    fMAGENTA;

    int i = 0;
    for(int row = 8; row <= 13; row++)
    {
        LOCATE(row, 27);
        cout << menu[i++];
    }

    //die("testing 1 2 3");
}

//BOX FUNCTION



/* SCREEN SAVER PROGRAM: screensaver adriano would display random colors and location all over the screen (use command line)
int main(int argc, char *argv[])
{
    for(;;) // infinite loop
    {
        rand(30,37); // for the colors
        int c = rand(0,79); // for the columns
        int r = rant(0,24); / for the rows
        LOCATE(c,r);
        cout << string(argv[1]);
        sleep(100); // 100 millisecond display pause
    }

}
*/

/* CLEAR SCREEN PROGRAM: sets pointer to lower left corner- so you need to set pointer to upper left corner
"\033[2j"
MAKE MACRO
*/


/*
printf("hello world\n");
string name = "John";
int age = 38;
char gen = 'M';
double salary = 480000.45
printf("%s %d %c %f \n", name, age, gen, salary); // 2 sections: (" format section " , variable section)
*/
