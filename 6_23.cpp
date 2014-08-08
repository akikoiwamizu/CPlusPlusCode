// 6-23-14

/* IF Statements

if(condition)
{
}

*/

#include <iostream>

using namespace std;

int main()
{

    // Giving a test score and outputting a grade

    cout << "Enter the score:";
    int score;
    char grade;

    cin >> score;

    if(score > 100 || score < 0) // if the condition=true then the if statement is run && DATA VALIDATION
    {
        cerr << "Invalid input\n";
        return 1;
    }

    if(score >= 90)
    {
        grade = 'A'; //char is in single quotes!!
    }
    else if(score >= 80)
    {
        grade = 'B';
    }
    else if(score >= 70)
    {
        grade = 'C';
    }
    else if(score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << grade << "\n";


    //Determining if you have an odd or even number

    int num;
    cout << "Give me a number:\n";
    cin >> num;

    if(num%2 == 0)
    {
        cout << "Your number is even.\n";
    }
    else
    {
        cout << "Your number is odd.\n";
    }


    // LOOPS

    int c = 0;

    while(c < 5)
    {
        cout << "Abbas.\n";
        c = c + 1; // A COUNTER
    }

    while(1)
    {
        cout << c << "\n";
        c++;
        if(c == 10) break; // BREAK terminates the loop
    }

    // CASH REGISTER

    int even = 0, odd = 0;
    int num;

    while(1)
    {
        cout << "Give me a number: ";
        cin >> num;
        c++;
        if(c > 10) break;
        if(num%2 == 0) even++;
        else odd++;
    }
    cout << "Number of evens: " << even << ".\n";
    cout << "Number of odds: " << odd << ".\n";






    return 0;


}
