#include <iostream>
#include <memory>
using namespace std;

class Test{
public:
    Test(){
    cout<<"creat"<<endl;
    }
    void great(){
    cout<<"hello"<<endl;
    }
    ~Test(){
    cout<<"destroyed"<<endl;
    }
};

int main()
{
    unique_ptr<int> pTest(new int());
    *pTest=10;
    cout<<*pTest<<endl;

    unique_ptr<Test[]> pp(new Test[2]);
    pp[1].great(); // here is . not ->

    shared_ptr<Test> pTest1=make_shared<Test>();
    pTest1->great();

    return 0;
}
