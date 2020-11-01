#include <iostream>

using namespace std;
template <class T>
auto text(T value)->decltype(value)
{
 return value;
}

int main()
{
    auto value=7;
    auto str="hello";
    cout<<text(8);

   cout<<"add test code";

    return 0;
}
