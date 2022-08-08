#include <iostream>

using namespace std;

// cpp will always look this main function first?
int main()
{
    // define our variables
    string characterName = "John";
    int characterAge;
    characterAge = 18;

    // console out
    // endline
    cout << "hello world" << endl;
    cout << "and " << characterName << endl;
    cout << "he is " << characterAge << " years old" << endl;
    characterName = "Mike";
    cout << "he is now call " << characterName << endl;

    cout << "   /|" << endl;
    cout << "  / |" << endl;
    cout << " /  |" << endl;
    cout << "/___|" << endl;

    return 0; // we need this in our main function
}