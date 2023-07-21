#include<iostream>
using namespace std;
class Test {
    public:
    Test() 
    {
        cout<<"Default constructor is called....."<<endl;
    }
     Test(int a) 
    {
        cout<<"Value of a is:"<<a<<endl;
    }
     Test(char a) 
    {
        cout<<"Char of a is:"<<a<<endl;
    }
     Test(int a,int k) 
    {
        cout<<"Addition of a and k is:"<<a+k<<endl;
    }
     Test(int a,int k,int l) 
    {
        cout<<"Product a,k and l is:"<<a*k*l<<endl;
    }
};
int main()
{
    Test t,a('A'),k(60),l(300,20),v(17,15,2);
}