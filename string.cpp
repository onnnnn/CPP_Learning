#include <iostream>

using namespace std;

int main()
{
    // and new line break
    cout << "Giraffe Academy\n"
         << endl;
    cout << "Hello" << endl;

    string phrase = "Giraffe Academy";
    // string length
    // it has no endline arg
    cout << phrase.length();
    cout << "ahahah" << endl;
    cout << phrase[2] << endl;

    // have to use char to replace single character in string
    phrase[0] = 'H';
    cout << phrase << endl;
    cout << phrase.find(" Academy", 5) << endl;
    cout << phrase.substr(5, 5) << endl;

    return 0;
}