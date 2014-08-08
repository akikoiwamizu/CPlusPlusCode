/*
Author: Akiko Iwamizu
Date: 06/27/2014
Homework#3
Course: CS110A
Objective: This program simulates a die that 2 players roll
*/

#include <iostream> // need for using I/O
#include <string> // need for using string
#include <cstdlib> // need for using rand()
#include <ctime> // need for using time(NULL)
#define RAND(a,b) (a+rand() % (b-a+1)) // need for rolling a random # between a and b
using namespace std;

int main()
{
    string player1;
    string player2;
    int ct_p1 = 0; // counter for player 1
    int ct_p2 = 0; // counter for player 2
    int die;
    srand(time(NULL)); //guarantees no repetition & must not be inside of the loop!

    cout << "Enter the name of player 1: ";
    cin >> player1;
    cout << "Enter the name of player 2: ";
    cin >> player2;
    cout << "Welcome " << player1 << " and " << player2 << "!" << endl;
    cin.get();

    for(int i = 0; i < 10; i++)
    {
        cin.get(); // only shows the result when the user hits "return"
        die = RAND(1,6);
        cout << player1 << " plays: " << die;
        ct_p1 += die;

        cin.get();
        die = RAND(1,6);
        cout << player2 << " plays: " << die;
        ct_p2 += die;
    }

    if(ct_p1 > ct_p2) cout << endl << endl << player1 << " wins with " << ct_p1 << " points!" << endl;
    else if(ct_p1 == ct_p2) cout << endl << endl << "There was a tie...No one wins." << endl;
    else cout << endl << endl << player2 << " wins with " << ct_p2 << " points!" << endl;

    return 0;

}
