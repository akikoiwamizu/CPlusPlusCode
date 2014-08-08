// 7/10/14
#include <iostream>
#include <vector>
#include <cstdlib>
#define RAND(a,b) (a+rand() % (b-a+1))
using namespace std;

int main()
{
    bool isSorted(int x[], int n, char order = 'a'); // for descending use order = 'd'

    int x[] = {9, 12, 14};
    if(isSorted(x, 3)) cout << "It is sorted." << endl;
    else cout << "It is not sorted." << endl;

    // 2D array
    int num[3][2] = {{7,9}, {12,18}, {6,3}}; // would look like a 2 column by 3 row matrix, In order to print it use nested loops
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 2; c++)
        {
            cout << num[r][c] << " ";
        }
        cout << endl;
    }

    //void showArray(int x[][], int); // The prototype of the showArray function


    // VECTORS!!!
    vector<int> v; // one way to create a vector
    cout << v.capacity() << endl; // capacity gives you the capacity of the vector (how much you can fill it) SIZE is different
    vector<int> vec(10); // means to allocate 10 spaces for your vector
    cout << vec.capacity() << endl;
    //vector<int> x(10,2); // This means to create a vector with 10 element spaces with the # 2 in them.
    v.push_back(29); // push_back is used when you haven't allocated space for the vector
    v.push_back(80);
    v.push_back(38);
    vector<int> myvect(v); // whatever v is, myvect is not identical to it
    //v[0] = 29;
    //v[1] = 80;
    //v[2] = 38;

    vector<int> vdie(100);
    for(int i = 0; i < vdie.size(); i++) //size() tells us how large the vector is
    {
        vdie[i] = RAND(1,6);
    }

    vector<char> letters(26,'A'); // creates a vector with size 26 and fills it with the letter A

    // vector function
    void printVector(vector<int> vect);
    printVector(v);


    vector<int> getNums();
    // using getnums vector function
    vector<int> myvects = getNums();
    printVector(myvects);

    // FINAL EXAM QUESTION 2: and try to do this backwards
    char pattern[10][10];
    for(int r = 0; r < 10; r++)
    {
        for(int c = 0; c < 10; c++)
        {
            if(r == c)
            {
                pattern[r][c] = 'O';
                char o = pattern[r][c];
                cout << o << " ";
            }
            else
            {
                pattern[r][c] = 'K';
                char k = pattern[r][c];
                cout << k << " ";
            }

            /* Transposed version
            if(r + c == 49)
            {
                pattern[r][c] = 'O';
                char a = pattern[r][c];
                cout << a << " ";
            }
            else
            {
                pattern[r][c] = 'K';
                char b = pattern[r][c];
                cout << b << " ";
            }
            */
        }
        cout << endl;
    }

    return 0;
}


// isSorted function that checks ascending order
bool isSorted(int x[], int n, char order = 'a')
{
    if(order == 'a')
    {
        for(int i = 0; i < n-1; i++)
        {
            if(x[i] > x[i+1]) return(false);
        }
        return(true);
    }
    else
    {
        for(int i = 0; i < n-1; i++)
        {
            if(x[i] < x[i+1]) return(false);
        }
        return(true);
    }
}


// A function that shows the array -- how to pass 2D array to a function
void showArray(int x[][2], int row) // [2] identifies the # of columns and int row will specify # of rows
{
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < 2; c++)
        {
            cout << x[r][c] << " ";
        }
        cout << endl;
    }
}


// PrintVector function that will show how to use vectors inside of functions
void printVector(vector<int> vect)
{
    for(int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
}


// Vector function that gets nums
vector<int> getNums()
{
     vector<int> v;
     v.push_back(5);
     v.push_back(12);
     v.push_back(9);
     return(v);
}


// FINAL EXAM QUESTION: write a function that is called twoDim2OneDim that converts 2D to 1D array


// FINAL EXAM QUESTION 2: write a program to design this pattern



/* HW 5 help -- writing alphabet on ticket and generating #, make sure you don't go beyond J

char c = 'A';
for(int i = 0; i < 9; i++)
{
    if(c > 'J') c = 'A';
    cout << c++ << endl;
}

*/

