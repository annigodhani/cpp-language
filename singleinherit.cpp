#include<iostream>
using namespace std;
class Base 
{
 int a;
 protected:
 int k;
 public:
 void Hallo()
 {
   cout<<"Wel Come....."<<endl;
 }
};
class Derived: public Base
{
 public:
 void Test()
 {
    Base :: k=17;
    cout<<"Hallo Man..."<<endl;
    cout<<"K:"<<k<<endl;
 }
};
 int main()
 {
    Derived d;
    d.Hallo();
    d.Test();
 }
