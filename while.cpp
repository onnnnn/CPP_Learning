#include <iostream>

using namespace std;

int main()
{
    // normal while loop
    int index = 1;
    while (index <= 5)
    {
        cout << index << " is still not greater" << endl;
        index++;
    }

    // do while loop
    int i = 6;
    do
    {
        cout << i << endl;
    } while (i <= 5);

    return 0;
}