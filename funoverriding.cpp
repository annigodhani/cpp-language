#include<iostream>
using namespace std;
class Base{
    public :
   virtual void Test()
    {
        cout<<"Base class function";
    }
};
class Derived : public Base{
    public :
    void Test()
    {
        cout<<"Base class function";   
    }
};
int main()
{
    Base *ptr,b;
    Derived x;
  //  ptr =&x;
    //ptr -> test();
    ptr= &b;
    ptr-> Test();

}