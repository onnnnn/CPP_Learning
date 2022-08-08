#include <iostream>

using namespace std;

int main()
{
    // notice using different symbol for char and string
    char grade = 'A';
    string phrase = "Giraffe Academy";
    int age = 50;
    // double can store more space than float
    double gpa = 2.3;
    bool isMale = true;
    // cant re-def same variable
    // bool isMale = false;
    // but you may overwrite it
    isMale = false;

    cout << isMale << endl;

    return 0;
}