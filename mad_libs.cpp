#include <iostream>

using namespace std;

int main()
{
    string color, pluralNoun, celebrity;

    cout << "enter a color: ";
    getline(cin, color);

    cout << "enter a pluralNoun: ";
    getline(cin, pluralNoun);

    cout << "enter a celebrity: ";
    getline(cin, celebrity);

    cout << "roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
}