// 7/17/2014

#include <iostream>
using namespace std;

/*
magic.cpp
magic (does not need arguments)
Hello John
Hello John (echos)
(to exist use ctrl-d)
*/

/*
magic < Lotto.cpp (similar to kat command in unix-- prints out content of file)
magic < Lotto.cpp > Lotto.bak (copies lines from Lotto.cpp to Lotto.bak)
*/

/*
magic > /dev/lp1 (printer channel)
I am testing my printer.
Hope it works! (ctrl-d)
*/


int main()
{
    int cnt = 0;
    char c;
    while(cin.get(c)) cnt++; //(counts the number of bytes in the file and prints it output_iterator_tag)
    cout << cnt << endl;
}
