#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    string value;
    cout << typeid(value).name()<<endl;

    decltype(value) name="lzs";
    cout<<name<<endl;
    return 0;
}
