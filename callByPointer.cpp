
#include <iostream>
using namespace std;
void swap (int *x, int *y)
int main()
{
    int a =100;
    int b= 200;
    cout << Before Swap value of << a << endl;
    cout << Before Swap value of << b <<endl;
    swap (&a, &b)
    cout << a << endl;
    cout << b << endl;
    return 0;
}
void swap (int *x,int *y)
{

    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
    return;
}
