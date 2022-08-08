#include <iostream>

using namespace std;

// pointers are memory address.

int main()
{
    /*
    we storing the data in a variable
    but computer store data in computer's memory at the memory address
    */
    int age = 19;
    double gpa = 2.7; // decimal number
    string name = "Mike";

    /*
    whenever we want to access the data,
    computer will look into the address
    */
    cout << age << endl;

    // to check where is the address that storing this piece of infomation (called pointer)
    cout << &age << endl;

    // create pointer variable to store pointer
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    // print out pointers variables
    cout << pAge << endl; // memory address

    // de-refferences
    cout << *pAge << endl;   // 19
    cout << &*pAge << endl;  // memory address
    cout << *&*pAge << endl; // 19
    cout << "" << endl;
    cout << &pAge << endl; // printing two memory address ???

    return 0;
}