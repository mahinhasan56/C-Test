#include <iostream>
//include <cstream>
using namespace std;
void printbook(Struct Books book)
{
    struct Books
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    }
    int main()
    {
        struct Books Book1;
        struct Books Book2;
        strcpy (Book1.title, "Learn C++");
        strcpy (Book1.author, "Chandmian");
        strcpy (Book1.subject, "C++ Programming");
        Book1.book_id=4282383;
        strcpy(Book2.title, "Telecom Billing");
        strcpy (Book2.author,"Yahit Singha");
        strcpy(Book2.subject, "telecom");
        Book2.book_id=2737828;
        printBook(Book1);
        printBook(Book2);
        return 0;
    }
    void printBook (struct Books *book)
    {

        cout <<"Book title :" << book-> title  << endl,
             cout <<"Book author :" << book -> author  << endl,
             cout <<"Book subject :" << book -> subject  << endl,
             cout <<"Book id :" << book -> book_id  << endl,

    }
}
