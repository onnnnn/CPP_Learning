#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;

    // prompt user the question
    cout << "enter your age: ";
    // collect user's answer into var age
    cin >> age;

    cout << "you are " << age << " years old" << endl;

    cout << "enter your name: ";

    // get whole line user's enter
    getline(cin, name);
    getline(cin, name);

    cout << "hello " << name;

    return 0;
}