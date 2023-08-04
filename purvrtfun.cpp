#include<iostream>
using namespace std;
class Base{
public :
virtual void Test() =0;  //pure virtual function 
   // {
     //   cout<<"Base class function";
   // }
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
 Derived d;
 ptr =&d;
 ptr ->Test(); 
}