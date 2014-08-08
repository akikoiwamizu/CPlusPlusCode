// 7/23/2014 notes
#include <iostream>
#include <string>
//#include <fstream>
#include <cstdlib>
#include <sstream> // using a string as a file
#include <vector>
#include <cctype>
#define die(msg){cerr << msg << endl; exit(1);}
#define rewind() {fs.clear(); fs.seekg(0L, ios::beg);}
using namespace std;

int main()
{
    string v1, v2, v3;
    stringstream ss;
    ss.str("today was hot.");
    ss >> v1 >> v2 >> v3; // v1 = today, v2 = was, v3 = hot
    string t = "I-like-Java-very-much";
    string u = "He likes C++ also";
    // JAVA: array c[] = t.split('-'); gets rid of the delimiter and splits it into different elts in the array
    // array y[] = u.split() // where whitespace is the default

    vector<string> split(string s, char delimiter = ' '); //PROTOTYPE
    string str = "I , like C++";
    vector<string> vec = split(str);
    for(int i = 0; i < vec.size(); i++) cout << vec[i] << endl; // prints each word in the vector
    cout << "num of words: " << vec.size() << endl; // 4

    return 0;
}
// GOOD FOR WORD COUNTER!
vector<string> split(string s, char delimiter = ' ')
{
    string t;
    vector<string> v;
    stringstream ss;
    ss.str(s); // str() is a public member function of stringstream that gets/sets the string content
    if(isspace(delimiter))
    {
        while(ss >> t) v.push_back(t); // picking word by word and putting it into t
    }
    else
    {
        while(getline(ss, t, ',')) v.push_back(t); // skip the commas (comma counts as a word)
    }
    return(v);
}


/* EXTRA CREDIT & HW HELP
for(int i = 0; fs >> name >> age; i++)
*/


/* DATAFILE1 PROGRAM
struct Student
{
    string name;
    int scores[3];
    int total;
    int grade;
    char final_grade;
};

int main()
{
    Student st[7];
    fstream fs("datafile1", ios::in);
    if(!fs.is_open()) die("cannot open file.");
    string name;
    int num1, num2, num3;
    int i = 0;
    for(int i = 0; fs >> name >> num1 >> num2 >> num3; i++)
    {
        st[i].name = name;
        st[i].scores[0] = num1;
        st[i].scores[1] = num2;
        st[i].scores[2] = num3;
        st[i].total = num1 + num2 + num3;
        st[i].grade = st[i].total / 3;

        char letter_score(int);
        st[i].final_grade = letter_score(st[i].grade);
        cout << name << " got a " << st[i].final_grade << endl;
    }

}

char letter_score(int score)
{
    char grade;
    if(score > 90) grade = 'A';
    else if(score > 80) grade = 'B';
    else if(score > 70) grade = 'C';
    else if(score > 60) grade = 'D';
    else if(score > 50) grade = 'F';
    return(grade);
}
*/


/* FINAL QUESTION 2:
struct Rectangle
{
    double length;
    double width;
    double perimeter;
    double area;
};

int main()
{
    Rectangle rect[4];
    rect[0].length = 7;
    rect[0].width = 5;
    rect[1].length = 9;
    rect[1].width = 4;
    rect[2].length = 6;
    rect[2].width = 3;
    rect[3].length = 8;
    rect[3].width = 7;

    void displayRectangle(Rectangle);
    displayRectangle(rect[4]);

}

void displayRectangle(Rectangle rect)
{
    for(int i = 0; i < 4; i++)
    {
        rect[i].perimeter = (2.0(rect[i].length) + 2.0(rect[i].width));
        cout << "Rectangle perimeter: " << rect[i].perimeter << endl;
        rect[i].area = rect[i].length * rect[i].width;
        cout << "Rectangle area: " << rect[i].area << endl;
        cout << "---------------------------------------" << endl;
    }
}
*/

/* FINAL QUESTION 1:
int main()
{
    void divideByFive(int &);

    int num = 15;
    divideByFive(num);
    cout << num << endl;

    int num2 = 14;
    divideByFive(num2);
    cout << num2 << endl;
}
void divideByFive(int &num) // if you are reading in a number & don't want to print in the function -- PASS BY REFERENCE
{
    if((num % 5) == 0) num /= 5;
}
*/
