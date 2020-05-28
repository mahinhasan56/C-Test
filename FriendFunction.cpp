#include <iostream>
using namespace std;
class myclass
{
    int n,d;

public:
    myclass (int i,int j)
    {
        n=i,d=j
    }
/*declare a friend of myclass friend int is factor (myclass ob;);
    here isfriend fuction declaration
    it turns true if d is of n Noticed that keyword friend is not used in defin of is factor()*/
    int isfactor(myclass.ob)
    {
        if (!(ob.n% ob.d) return 1;
        else return 0;
    }
    int main (){
      myclass obj1(10,2);ob2(13,3)
      if(isfactor(obj1))
      cout << "2 is a factor of 10\n";
      else cout << "2 is not a factor of 10\n";
      if(isfactor(ob2))
      cout << "3 is a factor of 13\n";
      else cout << "3 is not a factor of `13\n";
      return 0;
    }
}
