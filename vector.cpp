#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    for(vector <int> :: iterator i=v.begin();

            i!=v.end();
            i++)
    {

        cout << * i << " ";//for printing the vector
    }

    //output 1,2,3,4



}
