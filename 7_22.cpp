// 7/22/2014

// making new data types
typedef int integer;
typedef double real;
typedef unsigned int uint;
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// structures
struct PayRoll // this structure has 4 fields
{
    string name; // field
    double salary;
    string department;
    int rank;
};

struct Circle
{
    double radius;
    double area;
    double diameter;
};

struct Personal
{
    char gen;
    int age;
    string ssn;
};

struct Employee
{
    string name;
    double salary;
    string job;
    Personal p;
};

int main()
{
    // first approach to put data into structure
    PayRoll pr; // PayRoll is a data type
    pr.name = "John Lin";
    pr.salary = 48000;
    pr.department = "HR";
    pr.rank = 3;
    cout << "Number of byte allocations = " << sizeof(pr) << endl; // prints: Num ... = 24
    cout << pr.name << " is making " << pr.salary << endl; // prints: Num ... = 24

    Circle c1, c2;
    c1.radius = 4;
    c1.area = pow(c1.radius, 2)*3.14159;
    c1.diameter = 2*c1.radius;
    c2 = c1;

    Employee e1, e2;
    e1.name = "Alex Wong";
    e1. salary = 50000;
    e1.job = "Accountant";
    e1.p.gen = 'M';
    e1.p.age = 24;
    e1.p.ssn = "111-22-3333";
    e2.name = "Janet Lee";
    e2.salary = 60000;
    e2.job = "Analyst";
    e2.p.gen = 'F';
    e2.p.age = 35;
    e2.p.ssn = "444-55-6666";

    void displayEmployee(Employee);
    Employee emp[70];
    for(int i = 0; i < 70; i++)
    {
        displayEmployee(emp[i]);
    }

    Employee emp1, emp2;
    fillStruct(emp1);


}

void displayEmployee(Employee e)
{
    cout << "name: " << e.name << endl;
    cout << "salary: " << e.salary << endl;
    cout << "job: " << e.job << endl;
    cout << "gender: " << e.p.gen << endl;
    cout << "age: " << e.p.age << endl;
    cout << "ssn: " << e.p.ssn << endl;
    cout << "---------------------------------------" << endl;
}

/* function that fills the structure
void fillStruct(Employee &e) // YOU MUST PASS BY REFERENCE IN ORDER TO MAINTAIN CHANGES OF VARIABLES (SIMILAR TO SWAP PROBLEM)
{
    e.name =
    e.age =
    ....
}
*/


/* second approach to put data into structure
int main()
{
    PayRoll pr = {"John Lin", 48000, "HR", 3}; //initializes all structure variables

}


*/

/* EXTRA CREDIT 2 NOTES
int main(int argc, char *argv[])
{
    fstream fs(argv[1], ios::in || ios::binary);
    if(!fs.is_open()) die("The file you chose could not be opened.");

    void countLines(fstream &);
    void countWords(fstream &);
    void countChars(fstream &);

    countLines(&fs);
    countWords(&fs);
    countChars(&fs);
    return 0;
}

void countLines(fstream &fs)

void countWords(fstream &fs)

void countChars(fstream &fs)

bool openFile(fstream &fs)
*/


