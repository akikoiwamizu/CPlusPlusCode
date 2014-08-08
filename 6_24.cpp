// 6/24/2014 Notes

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int x;
    cout << "Enter a number:\n";
    cin >> x;
    cout << sizeof(x) << endl; // endl == \n "END LINE"

    for(int i = 0; i < 5; i++) // prints the output 5 times
    {
        cout << "Abbas." << endl;
    }

    /* Another version of the loop
    int i = 0;

    for( ; ; )
    {
        cout << "Abbas" << endl;
        if(i==4) break;
        i++;
    }
    */



    for(double d = 1.0; d <= 2.5; d+=0.3)
    {
        cout << d << endl;
    }
    // QUIZ: What is the output of this loop?
    // 1.0, 1.3, 1.6, 1.9, 2.2, 2.5




    for(char c = 'a'; c <= 'z'; c++)
    {
        cout << c;
    }
    // QUIZ: What is the output?
    // Prints a-z horizontally




    int c = 2;
    /* This condition is false because it increments c before the comparison (PREFIX)
    if(++c == 2)
    {
        cout << "HI";
    }
    */

    if(c++ == 2)
    {
        cout << "OK" << endl;
    }

    int sum = 0;
    for(int n = 1; n <= 99; n+=2)
    {
        sum += n;
    }
    cout << "sum= " << sum << endl; // gives sum = 1+3+5+7...+99;



    //FINAL EXAM QUESTION: WRITE A PROGRAM TO CALCULATE THIS: X = 1/2 + 1/4 + 1/6 + ... + 1/20
    double sums = 0;
    for(double x = 2; x <= 20; x+=2)
    {
            sums += (1/x); // sums = sums + (1/x);
    }
    cout << "sum of fractions:" << sums << endl;



    // WRITE THE PROGRAM TO CALCULATE THIS FORMULA: SUM = 1^2 + 2^4 + 3^6 + 4^8 + 5^10
    int sumPowers = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 2; j <= 10; j+=2)
        {
            sumPowers += pow(i, j);
        }

    }
    cout << "The sum of the powers is: " << sumPowers << endl;



    // hypotenuse
    int z=2, y=4;
    double h;
    h = pow((z*z + y*y), 0.5);


    // sum = 1/sqrt(2) + 1/sqrt(3) + ... + 1/sqrt(21)
    double num = 0;
    for(int d = 2; d <= 21; d++)
    {
        num+= 1/pow(d, 0.5);
    }
    cout << "Sum of sqrt fractions is: " << num << endl;



    // CALCULATING THE AVERAGE w/out knowing how many items there are
    double number;
    int n = 0;
    double total = 0;
    double avg;
    for(;;) //infinite loop b/c we don't know the number of items
    {
        cout << "Please enter a number (type 0 to exit): ";
        cin >> num;
        if(num == 0) break; // dummy variable
        n++;
        total+=num;
    }
    if(n != 0)
    {
        avg = total/n; // make sure you cannot divide by 0!
        cout << "The average is: " << avg << endl;
    }
    else
    {
        cerr << "Error: Division by 0" << endl;
        exit(1); // needs a header
    }



    return 0;

}
