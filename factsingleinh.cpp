#include<iostream>
using namespace std;
class factorial{
    int a;
    public:
    void Test()
    {    
 }
};
class Derived : public factorial
{
 public:
 int Getdata()
 {
   int value,fact=1,i;
   cout<<"ENter Any Num:";
   cin>>value;
   for(i=1;i<=value;i++)
 {    
   fact=fact*i;    
}    
  cout<<"Factorial"<<value<<"is:"<<fact<<endl;  
 }    
};
int main()
{
    Derived d;
    d.Getdata();
    d.Test();
}