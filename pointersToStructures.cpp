struct Books *struct pointer
struct_pointer = &Book1;
struct_pointer -> title;
#include <iostream>
#include <cstring>
using namespace std;
void printbook(struct Books *book);
struct Books{
}
int main(){
struct Books Book1;
struct Books Book2;
strcpy(Book1.title, "Learn C++ programming")
strcpy(Book1.author,"chand mian")
strcpy(Book1.subject,"C++ Programming")
Book1.book_id=3892389;
strcpy(Book2.title, "Telecom billing");
strcpy(Book2.author, "Yakit singha");
strcpy (Book2.subject , "telecom");
Book2.book_id=4362333;
printBook(&Book1);
printbook(&Book2);
return 0;
}

void printbook(struct Books *book)
cout << "Book title :" << book ->title <<endl;
cout << "Book author :" << book ->author <<endl;
cout << "Book subject :" << book ->subject<<endl;
cout << "Book id :" << book ->book_id <<endl;

}
