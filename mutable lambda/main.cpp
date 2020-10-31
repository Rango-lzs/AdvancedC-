#include <iostream>

using namespace std;

int main()
{
    int cats=5;
    [cats]() mutable{  // this you can change the local variable
        cats=10;
    cout<<cats<<endl;
    }();
    cout<<cats;
    return 0;
}
