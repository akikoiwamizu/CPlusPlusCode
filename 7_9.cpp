// 7/9/14 : Search algorithms

#include <iostream>
#include <string>
#include <cstring>
#define array_size(x) sizeof(x)/sizeof(x[0])
using namespace std;

int main()
{

    void bubble_sort(int x[], int n);

    int x[] = {1, 4, 3, 7};
    bubble_sort(x, 4);
    for(int i = 0; i < array_size(x); i++)
    {
        cout << x[i] << " ";
    }

    string names[] = {"Jack", "David", "Alex", "Tony", "Frank"};
    string id;
    cout << "What name are you looking for: ";
    cin >> id;

    int seq_search(string s[],int n,string target);

    int location = seq_search(names, array_size(names), id); // Assigning the location of the target to a variable in order to return "i" from seq_search
    if(location == -1)
    {
        cerr << "ID is not in the list." << endl;
        return(-1);
    }
    cout << id << " was found in the location " << location << endl;

}


// SEQUENTIAL SEARCH ALGORITHM
int seq_search(string s[], int n, string target) // SEQUENTIAL SEARCH: Searches the target one by one inside of the array
{
    for(int i = 0; i < n; i++)
    {
        if(target == s[i]) return(i);
    }
    return(-1);
}


// SWAP FUNCTION
void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}


// BUBBLE SORT ALGORITHM
void bubble_sort(int x[], int n) // one loop takes care of the # of passes, the other loop compares the elements
{
    int t;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(x[i] > x[j])
            {
                swap(x[i], x[j]);
            }

        }
    }

}


// BINARY SEARCH ALGORITHM -- array must be sorted before using the algorithm!
int bin_search(int x[], int n, int target)
{
    int top = 0;
    int bot = n - 1;
    int mid;
    while(top <= bot)
    {
        mid = (top + bot)/2;
        if(target == x[mid]) return(mid);
        if(target < x[mid]) bot = mid - 1;
        else top = mid + 1;
    }
    return(-1);
}



