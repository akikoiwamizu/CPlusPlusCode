/*Author: Akiko Iwamizu
Date: 07/21/2014
Homework#6
Course: CS110A
Objective: Fixes the datafile by arranging the names column.*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cctype>
#define die(msg){cerr << msg << endl; exit(1);}
using namespace std;
//************************************main()****************************************
int main()
{
    ifstream ifs("datafile");
    if(!ifs.is_open()) die("datafile did not open.");
    ofstream newFile("datafile.fix");
    while(!ifs.eof())
    {
        int fnameLoc, lnameLoc, lnameIndex, ageLoc, ageIndex;
        string line, fname, lname, last, age;
        void fixNames(string &, string &);

        for(int i = 0; getline(ifs, line); i++)
        {
            fnameLoc = line.find(",", 0);
            fname = line.substr(0, fnameLoc);

            lnameLoc = fnameLoc + 1;
            lnameIndex = line.find(" ", lnameLoc);
            lname = line.substr(lnameLoc, lnameIndex);

            last = "";
            for(int i = 0; i < lname.size(); i++)
            {
                if(isalpha(lname[i])) last += lname[i];
            }

            if(!isalnum(line[0]))
            {
                newFile << line << endl;
                continue;
            }

            ageLoc = line.find(" ", 0) + 1;
            ageIndex = line.find("\n", ageLoc);
            age = line.substr(ageLoc, ageIndex);

            fixNames(last, fname);
            newFile << last << ", " << fname << age << endl;
        }
    }
    ifs.close();
    newFile.close();
    return 0;
}
//************************************fixNames()**************************************
void fixNames(string &l, string &f)
{
    l[0] = toupper(l[0]);
    f[0] = toupper(f[0]);
}
