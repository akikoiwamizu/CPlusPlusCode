// 7/29/2014
#include <iostream>
#include <cmath>
#define Good 5
#define Nice 6
#define Tall 7
#define Ugly 8
/*
// FINAL EXAM QUESTION 1 - HOW TO INCREMENT THE VALUES OF THE MEMBERS?
instead of making macros you can use enum: (THESE ARE THE SAME -- THIS IS JUST ANOTHER WAY TO DO IT!)
enum body {Good = 5, Nice, Tall, Ugly}; // sets Nice = 6, Tall = 7, Ugly = 8

//FINAL EXAM QUESTION 2: set the members to these values
#define Good 5
#define Nice 9
#define Tall 0
#define Ugly 4
// substitute with:
ANSWER: enum body {Good = 5, Nice = 9, Tall = 0, Ugly = 4};


// QUESTION 3: WHAT IS THE VALUE OF Nice?
enum body {Good = 5, Nice, Tall = 0, Ugly = 4};
ANSWER: Nice = 6

// Another way???
ANSWER: use switch!!!
enum body { good, nice, tall, ugly};
body b = tall;
switch(b)
{
    case good : ______;
    case nice : ______;
    case tall : ______;
    case ugly : ______;
}


// FINAL EXAM QUESTION 4: compiler doesn't give an error message -- so what is "zero"
...
int x;
x = zero;
ANSWER: zero can be 1) a variable declared previously, or 2) an integer variable using enum

*/


using namespace std;


// CLASSES
class Circle // radius and area are MEMBERS of this class
{
    private: // means that the following items are inaccessible to anyone
        double radius;

    public: // makes the following items accessible to anyone
        //Circle(){};  // EXAMPLE OF A DEFAULT CONSTRUCTOR - same name as class & no return type or value (this is invisible)
        Circle(double r) // EXAMPLE OF OVERRIDING A CONSTRUCTOR
        {
            radius = r;
        }
        double area() // you do not need to use arguments b/c the function can access the private variable!!!
        {
            return(3.1415 * pow(radius , 2));
        }
        /* this is commented out b/c the overridden constructor makes this function REDUNDANT
        void setRadius(double r) // EXAMPLE OF A SETTER - type void!
        {
            radius = r;
        }
        */
        double getRadius() // EXAMPLE OF A GETTER - no arguments & returns same data type as variable!
        {
            return(radius);
    }

};


class Box
{
    private:
        int width; // these are instance variables
        int height;
        int depth;
    public:
        Box(int w, int h, int d) // puts data into our private instance variables, this is our OVERRIDDEN CONSTRUCTOR
        {
            width = w; // ie. width = 2
            height = h;
            depth = d;
        }
        Box(int dim) // a constructor that can be used in the case of a cube -- has all the same dimensions
        {
            width = height = depth  = dim;
        }
        Box() // DEFAULT CONSTRUCTOR
        {
            //Box(0); // this uses the constructor that uses the cube case
            width = height = depth  = 0;
        }
        int volume() // since the private variables are available to the function (b/c they are in same class), we do not need ARGUMENTS
        {
            return(width * height * depth);
        }
        void showDim()
        {
            cout << "Width = " << width << endl;
            cout << "Height = " << height << endl;
            cout << "Depth = " << depth << endl;
        }
        // because the variables are private: if we want to know what the values are, you need getters!
        int getWidth(){ return(width);}
        int getHeight(){ return(height);}
        int getDepth(){ return(depth);}
};


int main()
{
    enum fruits {Apple, banana, mango, pomegranate}; // 4 members: where Apple = 0, banana = 1, mango = 2, pomegranate = 3

    int f;
    f = Apple;
    f = banana;
    f++; // f = mango
    cout << f << endl; // prints: 2 (which is mango!)
    // cannot say f = pear; because pear is NOT a member of the data type

    for(int i = Apple; i <= pomegranate; i++) // use int i = Apple, instead of fruit i = Apple b/c old version of C++
    {
        cout << i << endl;
    }

    // ENUM BOOLEAN TYPE
    enum xbool {FALSE, TRUE};
    if(TRUE) cout << "It worked." << endl; // if(FALSE) would return nothing!

    /* gives you an infinite number of 1's :
    while(TRUE)
    {
        cout << 1 << endl;
    }*/



    // CIRCLE CLASS EXAMPLE
    // Circle c; // this variable is called "object" -- object of the class

    // how to access or set the value for the PRIVATE radius? USE A SETTER!!
    // if radius were PUBLIC you could do: c.radius = 4.2; (same method as structure: using "class.variable = ...;")
    // ANSWER: c.setRadius(4.2); // this is commented out because we are using a constructor now

    // CREATING AN OBJECT OF THE CLASS USNG A CONSTRUCTOR!
    Circle c(4.2);

    // how to display the value of radius? USE A GETTER!!
    cout << "The value of the radius is = " << c.getRadius() << endl; // prints: 4.2
    cout << "The area with the radius listed above is = " << c.area() << endl; // prints: 55.4161



    // BOX CLASS EXAMPLE
    Box b1(3, 9, 2);
    Box b2(4, 5, 7); // there are 2 objects now
    cout << "Volume 1 = " << b1.volume() << endl;
    cout << "Volume 2 = " << b2.volume() << endl;

    // CUBE CONSTRUCTOR EXAMPLE
    Box b3(4);
    cout << "Volume of the cube = " << b3.volume() << endl; // prints: 64

    // OVERRIDDEN DEFAULT CONSTRUCTOR
    Box b4; // default constructor called -- BEWARE: Box b4(); does NOT call constructor!!!
    cout << "Default constructor volume = " << b4.volume() << endl; // prints: 0

    return 0;
}




