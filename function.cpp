#include <iostream>

using namespace std;

// kinda placeholder for main function
void sayHi(string name, int age);

int main()
{
    cout << "top" << endl;
    sayHi("Mike", 45);
    sayHi("Harry", 22);
    cout << "bottom" << endl;
    return 0;
}

// void means this function will not return anything
void sayHi(string name, int age)
{
    cout << "hello " << name << endl;
    cout << "you are " << age << " years old" << endl;
}