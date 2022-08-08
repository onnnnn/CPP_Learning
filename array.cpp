#include <iostream>

using namespace std;

int main()
{
    // create array that contains int
    int luckyNums[] = {4, 8, 15, 23, 42};
    // create array that can only contains 20 int
    int luckyNumss[20] = {4, 8, 15, 23, 42};

    // slicing
    // array's index start from 0
    cout << luckyNums[0];
    cout << "\n";
    cout << '\n';
    cout << luckyNums[2] << endl;

    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;

    luckyNumss[15] = 100;
    cout << luckyNumss[15];

    return 0;
}