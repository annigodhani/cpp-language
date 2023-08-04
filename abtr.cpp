#include<iostream>
using namespace std;
class Base{
    public :
   virtual void Test()=0;
   // {
     //   cout<<"base class function";

    //}
};
class  Derived : public Base{
    public :
    void Test()
    {
        cout<<"Base class function";
        
    }
};
int main()
{
    Base *ptr;
    Derived x;
    ptr =&x;
    ptr -> Test();
}