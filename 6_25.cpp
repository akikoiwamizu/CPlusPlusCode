// 6/25/14 Notes

#include <iostream>
#include <string>
#include <cmath>
#define PI 3.1415
#define PRINT cout
#define hyp(x,y) (sqrt(pow(x,2)+pow(y,2))) //substitute x and y with #'s to print the value of hyp (MACRO)
#define max(x,y) ((x>y)?x:y) //ternary operator
#define FALSE 0
#define TRUE !FALSE
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int result, x;

    // Can be made into 1 line of code
    /* if(x == 70)
    {
        result = 98;
    }
    else
    {
        result = 2000;
    }
    */
    result = (x == 70)?98:2000; //Ternary operator example
    int dollars;
    cout << "enter dollars: ";
    cin >> dollars;

    cout << "You have: " << dollars << " dollars\n"; // Based on value of dollars, we want to make output plural or singular

    cout << "You have: " << dollars << " dollar" << (dollars > 1?"s":"") << endl;



    string city, name;
    cout << "what city?";
    cin >> city;
    cout << "your name?";
    cin >> name;
    cout << name << " is living in " << city << endl;

    //cin.ignore(); //deletes "\n" from the input buffer



    //getline(cin, name) where "name" is the string variable, requires #include <string>
    string sent;
    cout << "give me a sentence: ";
    getline(cin, sent); //takes the whole line of the users' input
    cout << sent << endl;

    string nam;
    cout << "Please, enter your full name: ";
    getline (cin,nam);
    cout << "Hello, " << nam << "!\n";


    //example of cin.get()
    char c;
    cout << "give me a char: ";
    cin.get(c);
    cout << c << endl;


    //example of the use of #DEFINE
    int r;
    double area = r*r*PI;
    PRINT << PI << endl;
    cout << hyp(2,3) << endl; //same as: double hypotenuse = sqrt(pow(x,2) + pow(y,2));
    cout << max(233, 222);


    //generating random numbers needs #include <cstdlib> like in exit()
    srand(time(NULL)); // n = seed of random number, NEVER put it in a loop
    for(int i = 0; i < 5; i++)
    {
        cout << rand() << endl;
    }

    cout << time(NULL);



    return 0;


}
