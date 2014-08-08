//6/19/2014

#include <iostream>
#include <string> // YOU MUST USE THIS IN ORDER FOR THE PROGRAM TO RECOGNIZE A STRING VARIABLE!!!!
#include <cmath> // YOU MUST USE THIS IN ORDER TO USE SPECIAL MATH OPERATORS!
using namespace std;

int main()
{
    string name = "Alex Wong";
    string final_grade = "A";
    double total_score = 98.5;
    bool good_student = true;

    cout << "Student: " << name << " received: " << final_grade << " with the total score of: " << total_score
    << " and he is a good student: " << good_student << ".\n" ;

    int num1 = 9;
    int num2 = 7;
    int sum = num1 + num2; // 16
    int diff = num1 - num2; // 2
    int div = num1/num2; // 1
    int mod = num1%num2; // 2
    int mul = num1*num2; // 63
    int div2 = num2/num1; // 0
    int mod2 = num2%num1; // 7

    double x = 7.0;
    double y = 2.0;
    double z = x/y; //3.5
    cout << z << "\n";
    cout << div << "\n";
    cout << (double)num1/num2 << "\n"; // CASTING; C style casting


    double a = 3.82;
    double b = 1.5;
    double c = (int)a/(int)b; // 3; You must put 2 (int)'s because double is dominant!
    cout << c << "\n";

    cout << static_cast<double>(num1)/num2 << "\n"; // C++ style casting


    // FINAL EXAM QUESTIONS, what is the output?
    int num_1 = 7;
    int num_2 = 2;
    int num_3 = (double)num_1/num_2; //3; because int removes the remainder from the double output of 3.5
    cout << num_3 << "\n";
    cout << (double)num_3 << "\n"; //3


    int n = 8*5/4+9*3-1;
    cout << n << "\n"; //36

    double power = pow(2.7,5); //
    cout << power << "\n";

    double radius = 5.6;
    double area = pow(radius, 2) * 3.141592;
    cout << area << "\n";

    //const double pi = 3.141592; // a constant

    double area1;
    double radius1 = 2.8;
    const double PI = 3.141592;
    area1 = pow(radius1, 2)*PI;    cout << area1 << "\n";

    //how to interact with the user
    int age;
    double height;
    cout << "What is your age and height?"; //NO NEWLINE CHARACTER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    cin >> age >> height;
    cout << "You are " << age << " years old and " << height << " feet tall. \n";


    //2 inputs separately given
    string first_name;
    string last_name;
    cout << "What is your first name?";
    cin >> first_name;
    cout << "What is your last name?";
    cin >> last_name;
    cout << "Your full name is: " << first_name << " " << last_name << "\n";


    //write a program that acts like a cash register
    string item_name;
    double price;
    double amount_of_item;
    double total;
    double tax;
    const double TAX = 9.1/100;
    cout << "What is the name of the item that you would like to purchase?";
    cin >> item_name;
    cout << "What is the price of that item?";
    cin >> price;
    cout << "How many would you like to buy?";
    cin >> amount_of_item;
    tax = price*amount_of_item*TAX;
    total = price*amount_of_item+tax;
    cout << "Your total for " << "(" << amount_of_item << ") " << item_name << "(s): " << total << "\n";


    return 0;

}

