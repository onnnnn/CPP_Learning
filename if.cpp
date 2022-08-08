#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = false;

    // AND operation &&
    // OR operation ||
    if (isMale && isTall)
    {
        cout << "you are a tall male";
    }
    // NOT operation !
    else if (isMale && !isTall)
    {
        cout << "you are a short male";
    }
    else if (!isMale && isTall)
    {
        cout << "you are tall but not male";
    }
    else
    {
        cout << "you are not male";
    }

    return 0;
}