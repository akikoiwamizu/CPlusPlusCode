// 7/30/2014
#include <iostream>
#include <cstdlib>
#define rand(a,b) (a+rand() % (b-a+1))
using namespace std;

/* HEAP & MEMORY EXAMPLE
void doIt()
{
    int x[100000];
}
*/

class Rectangle
{
    private: // if you don't write private, private is the default if you do not specify
        int length;
        int width;
    public:
        // prototypes for the functions that are "long"
        Rectangle(int len, int wid); /* // CONSTRUCTORS DO NOT HAVE DATA TYPES!
        {
            length = len;
            width = wid;
        }*/
        int area(); /* does not need parameters b/c the variables are available within the class
        {
            return(length * width);
        }*/
        int perimeter();/*
        {
            return((2*length) + (2*width));
        }*/
        ~Rectangle() // DESTRUCTOR
        {
            cout << "Goodbye. This is the inline destructor" << endl;
        }
};


// ALL OF THE CLASS' CONSTRUCTORS AND FUNCTIONS: (this makes the program FASTER) made outside of the class
Rectangle::Rectangle(int len, int wid)
{
    length = len;
    width = wid;
}
int Rectangle::area() // I'm creating an area function that belongs to the Rectangle class and returns int
{
    return(length * width);
}
int Rectangle::perimeter()
{
    return((2*length) + (2*width));
}
/*
Rectangle::~Rectangle() //DESTRUCTOR OUTSIDE OF CLASS
{
    cout << "Goodbye. This is the outside destructor." << endl;
}*/


int main()
{
    // HEAP & MEMORY EXAMPLE
    /*
    for(int i = 0; i < 50000; i++)
    {
        doIt();
    }
    */

    // POINTER
    int age = 38; // located in memory somewhere, but where is it located?
    cout << age << endl; // prints: 38
    cout << &age << endl; // prints: memory address (0x28fefc)

    int *ptr; // you MUST use "*" in front of your declaration to indicate a POINTER
    // -- this pointer specializes in an area of memory that handles int
    ptr = &age; // prints: memory address (0x28fefc)
    cout << ptr << endl;

    // DYNAMIC ARRAY EXAMPLE
    int *n = new int[100]; // "new" allocates room in the memory for you & sets the pointer "n" to it!
    for(int i = 0; i < 100; i++) n[i] = rand(1,120); // set a rand # to the location n is pointing to
    // you must remove the array from the HEAP when you are done with it
    delete [] n; // delete the array that "n" is pointing to!
    n = new int[1000]; // allocating room in the memory for 1000 integers -- this expands the array

    // MKARRAY EXAMPLE
    int *mkarray(int);
    int *num = mkarray(50); // sets pointer to an array called num with the size 50
    num[0] = 38;
    num[1] = 25;
    num[2] = 17;
    cout << num << endl; // gives the memory address of the dynamic array -- array num[0-2]
    // cout << ++num << endl; // gives the memory address of the next location of the -- array num[1-3]
    for(int i = 0; i < 3; i++) cout << num[i] << endl; // prints: 38, 25, 17

    // you can do this with any data type:
    // double *balances = new double[52]; // an array with 52 elements that balances points to


    // RECTANGLE EXAMPLE:
    Rectangle rect(3,5); // object created in HEAP -- compiler removes the object automatically using default deconstructor
    cout << "rectangle area = " << rect.area() << endl;
    cout << "rectangle perimeter = " << rect.perimeter() << endl;

}
// MKARRAY FUNCTION
int *mkarray(int size)
{
    int *ptr = new int[size]; // create an array with this size and set the pointer to it
    return(ptr); // returns the pointer
}
