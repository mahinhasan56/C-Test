#include <iostream>
#include <iomanip.h>
#include <conio.h>
int main()
{
    cout << setw(10)<<"Hello"<<endl;
    cout << setw(15)<<setprecision(2)<< 2.5555;
    cout <<setiosflags(ios::hex);
    cout << endl<< "Hexadecimal of 84 is" << 84;
    return 0;
}
