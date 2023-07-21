#include<iostream>
using namespace std;
class Test {
    int a=10,k=17;
    public:
    Test() 
    {
        cout<<"Test class called....."<<endl;
    }
    void getdata() 
    {
       cout<<"Product of a and k is:"<<a*k<<endl;
    }
    ~Test()
    {
        cout<<"Test class destructor called....."<<endl;
    }
};
int main()
{
    Test t;
    t.getdata();
}
