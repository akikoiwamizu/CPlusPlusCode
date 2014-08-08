// 7/14/2014 Notes

/* HW5 Notes
bool check(false, 57);

//Another version of the line above
bool check[57];
for(int i = 0; i < array_size(check); i++) check[i] = false;

if(num < 10) // convert number to string and concatenate a 0
{
    s = "0" + num;
}


*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string name = "John";
    string t(name, 2); // t = "Jo"
    cout << t << endl;
    string line('z', 3);
    cout << line << endl;
    string k(name, 1, 2); // means create a new string called k that goes to location "1" and pick "2" chars // k = "oh"
    cout << k << endl;

    name.append("     Doe"); // John    Doe
    cout << name << endl;
    name.append(3, '!'); // John   Doe!!!
    cout << name << endl;
    name.clear(); // removes everything from the string
    cout << name << endl;

    string n;
    cout << "Your name: ";
    cin >> n;
    if(n.empty()) cerr << "You entered nothing.." << endl;

    string str = "Today was hot and cold in SF.";
    // To delete "hot and" use the erase function!
    str.erase(10, 8); // go to location 10 and erase 7 chars
    cout << str << endl; // prints "Today was cold in SF"
    str.find("Hot", 0); // Find these characters and start from 0 // gives the location: 10
    str.rfind("d", 0); // starts from the right
    str.insert(14, " dog"); // go to position: 13 and insert the chars "dog"
    cout << str << endl; // prints: "Today was cold dog in SF"

    string s = str.substr(10,4); // go to location: 10 and take 4 chars out
    cout << "I like it " << s << endl; // prints: "I like it cold"


    // To swap the values of the strings
    string r = "nice guy";
    string u = "bad guy";
    u.swap(r);
    cout << r << endl;

    // To change the words hot --> cold
    string change(string s, string olds, string news);
    string q = "Today was hot and I ate a hotdog and hot coffee.";
    string x = change(q, "hot", "cold"); // print: "Today was cold and I ate a hotdog and hot coffee."


    // using the SYSTEM input output FILES:
    // open(c_string) <-- the argument
    string filename = "secret.txt";
    ifstream ifs(filename.c_str()); // converts a string to c_string!!!
    string l;
    while(getline(ifs, l) != 0) // returns 0 at the end of the file
    {
        cout << l << endl;
    }
    ifs.close();  // must close the file after opening it


    /*
    string mkheader(string);
    cout << mkheader("uniq");
    */

    return 0;
}

//QUESTION ON FINAL: ACCEPTS NAME OF FINAL AND CREATES A HEADER FOR IT
string mkheader(string fname)
{
    string stars('*', 15);
    string t = "//" + stars + fname + "()" + stars;
    return t;
}

// a function that can replace chars in a string
string change(string s, string olds, string news)
{
    int p;
    if(s.empty()) return s;
    p = s.find(olds, 0);
    s.erase(p, olds.size()); // goes to location p and erases the amount olds.size()
    s.insert(p, news);
    cout << s << endl;
    return s;
}

/*
int system(c_string) // if the job is done successfully then it will return 0 (otherwise it will return a non-zero number)
{
    system("ls | wc -l");
    system("cp prog1 prog2"); // makes a copy of your program1 to a new file called program2
}*/
