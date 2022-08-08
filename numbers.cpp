#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 40 + 34 << endl;
    cout << 9 % 3 << endl;

    int wnum = 5;
    double dnum = 5.5;

    // minus 1 and re-asign
    wnum--;
    cout << wnum;

    // add 1 and re-asign
    wnum++;
    cout << wnum;

    // add n and re-asign
    wnum += 5;
    cout << wnum << endl;

    cout << "-----------" << endl;

    // they all gonna output the same
    cout << 9.0 / 3.0 << endl;
    cout << 9 / 3 << endl;
    cout << 9.0 / 3 << endl;

    cout << pow(2, 3) << endl;
    // output the max number
    cout << fmax(3, 10) << endl;

    return 0;
}