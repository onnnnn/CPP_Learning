#include <iostream>

using namespace std;

int main()
{
    /*
    create 2d array
    type hint for our 2d array
    */
    int numberGrid[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    // slicing 2d array
    cout << numberGrid[2][0] << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}