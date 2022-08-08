#include <iostream>

using namespace std;

// blueprint for a book (template of a datatype)
class Book
{
public:
    string title;
    string author;
    int pages;
};

int main()
{
    Book book1;
    book1.title = "harry potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << book1.title << endl;
    cout << book1.author << endl;

    Book book2;
    book2.title = "Lord of the rings";
    book2.author = "Tolkein";
    book2.pages = 700;
    book2.pages = 999;

    cout << book2.pages << endl;

    return 0;
}