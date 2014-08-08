// Programming notes for 6/18
// MUST use spaces instead of tab indentation


//EXAMPLE OF QUIZ !!!

#include <iostream>
#include <string> // must be included in order to declare string variables

using namespace std;


int main()
{
    // unsigned int age; (means to disregard the sign of the number and only includes positives)
    int age; // DECLARING age
    char myFinalGrade = 'A' ;
    char dollarSign = '$' ;
    char atSign = '@' ;
    string homeAddress = "972 Bush St. #51, San Francisco, CA 94109.\n" ;
    string border = "******************************************" ;

    cout << border << "\n" ;
    cout << homeAddress;
    cout << "John\r\n" ; // \r is a "carriage return" where the cursor goes to the beginning of the line
    cout << "\n\n\nJohn\n" ;
    cout << "\r\rJohn\n" ;
    age = 89; // INITIALIZING age
    cout << "I am " << age << " years old.\n" ; // variables SHOULD NOT be in quotes
    // area of a circle
    // math operations: * multiplication, / division,
    double area;
    double radius = 2.97;
    area = radius*radius*3.141592 ;
    cout << "The area of the circle is: " << area << "\n" ;
    cout << border << "\n";

    // testing boolean data type
    bool doorClosed = false;
    bool ladiesAreGoodInCS = true;
    cout << !doorClosed << "\n" ; // will print a "1" because it is true

    return 0;
}
