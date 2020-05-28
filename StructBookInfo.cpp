#include  <iostream>
struct Books
{

    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books Book1;
    struct Books Book2;
    strcpy(Book1.title,"Learn C++");
    strcpy(Book1.author,"ChandMian");
    strcpy(Book1.subject,"C++ programing");
    Book1.book_id="6736810";

    strcpy(Book2.title,"Telecom biling");
    strcpy(Book2.author,"Yahit Singha");
    strcpy(Book2.subject,"Telecom");
    Book2.book_id="89437934";

//Print Book1 info
    cout << "Book1 title:"<<Book1.title << endl;
    cout << "Book1 author:"<<Book1.author << endl;

    cout << "Book1 subject:"<<Book1.subject<<endl;

    cout << "Book1 id:"<<Book1.book_id<<endl;

    //  print Book2 info
    cout <<"Book2 title : "<< Book2.title<<endl;
    cout <<"Book2 author : "<< Book2.author<< endl;

    cout <<"Book2 subject :"<<Book2.subject<<endl;
    cout <<"Book2 id :" <<Book2.book_id<<endl;
    return 0;
}
