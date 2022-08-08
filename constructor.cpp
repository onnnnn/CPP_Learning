#include <iostream>

using namespace std;

// blueprint for a book (template of a datatype)
class Book
{
public:
    string title;
    string author;
    int pages;

    // constructor
    // default value if user not specify it
    Book()
    {
        title = "no title";
        author = "no author";
        pages = 0;
    }

    // pass something into the class itself at the very first
    // this will soon run whenever this class created
    Book(string aTitle, string aAuthor, int aPages)
    {
        cout << "something here" << endl;
        cout << aTitle << endl;

        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main()
{
    Book book1("harry potter", "JK Rowling", 500);
    book1.title = "harry potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << book1.title << endl;
    cout << book1.author << endl;

    Book book2("Lord of the rings", "Tolkein", 700);
    book2.pages = 999;

    cout << book2.pages << endl;

    return 0;
}