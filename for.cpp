#include <iostream>

using namespace std;

int power(int baseNum, int powNum)
{
    int result = 1;
    for (int i = 0; i < powNum; i++)
    {
        result = result * baseNum;
    }
    return result;
}

int main()
{
    // while loop
    int index = 1;
    while (index <= 5)
    {
        cout << index << endl;
        index++;
    }

    cout << "------------" << endl;

    // this for loop does nothing different than that while loop
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout << "------------" << endl;

    int nums[] = {1, 2, 5, 7, 3};
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << endl;
    }

    cout << "------------" << endl;

    cout << power(2, 3) << endl;

    return 0;
}