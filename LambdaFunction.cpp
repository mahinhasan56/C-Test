#include <iostream>
#include <vector>
#include <algorithm>
#include <function>
void Foreach(const std::vector <int> & values,
const std::function<void(int)>& func)
{
    for (int value:values)
    {
    func(value)
    }
}
int main(){
std::vector <int>values ={1,5,4,2,3}
auto it = std::find_if (values.begin(),velues.end(),[](int value){return value>3;});
std::cout << *it << std :: endl;
int a = 5;
auto lambda = [=] (int value) {std::cout << "values" << a << std ::endl;};
For each(values,lambda){
std:: cin.get();
}
