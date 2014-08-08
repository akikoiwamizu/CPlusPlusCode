/*
Author: Akiko Iwamizu
Date: 06/24/2014
Homework#2
Course: CS110A
Objective: This program creates a penny converter
*/

#include <iostream>
using namespace std;

int main()
{
    const int DOLLAR = 100, FIFTYCENT = 50, QUARTER = 25, DIME = 10, NICKEL = 5, PENNY = 1;
    int dollars, fiftycents, quarters, dimes, nickels, pennies;
    int money;

    cout << "How many pennies do you have?";
    cin >> money;

    if(money <= 0)
    {
        cerr << "I'm sorry, but that is invalid input." << endl;
        return 1;
    }

    // MATH -- converter
    dollars = money/DOLLAR;
    money = money%DOLLAR;
    fiftycents = money/FIFTYCENT;
    money = money%FIFTYCENT;
    quarters = money/QUARTER;
    money = money%QUARTER;
    dimes = money/DIME;
    money = money%DIME;
    nickels = money/NICKEL;
    money = money%NICKEL;
    pennies = money/PENNY;
    money = money%PENNY;

    cout << "Your total is: " << endl;

    if(dollars >= 1)
    {
        cout << dollars << " dollar" << ((dollars>1)?"s":"") << endl;
    }
    if(fiftycents >= 1)
    {
        cout << fiftycents << " fifty cent coin" << ((fiftycents>1)?"s":"") << endl;
    }
    if(quarters >= 1)
    {
        cout << quarters << " quarter" << ((quarters>1)?"s":"") << endl;
    }
    if(dimes >= 1)
    {
        cout << dimes << " dime" << ((dimes>1)?"s":"") << endl;
    }
    if(nickels >= 1)
    {
        cout << nickels << " nickel" << ((nickels>1)?"s":"") << endl;
    }
    if(pennies == 1)
    {
        cout << pennies << " penny" << endl;
    }
    else if(pennies > 1)
    {
        cout << pennies << " pennies" << endl;
    }

    return 0;
}
