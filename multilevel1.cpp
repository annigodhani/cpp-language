#include<iostream>
using namespace std;
class square{
 int a;
 protected:
 int k;    
};
class sqr : public square
{
 public:
 void test()
 {}
};
class Derived : public sqr
{
 public:
 int getdata()
{
 int i,j;
 cout<<"Enter val J:";
 cin>>j;
 for(i=0;i<=j;i++)
{
 cout<<"\t"<<i;
 cout<<"\t"<<i*i;
  } 
 }
};   
int main()
{
 Derived d;
 d.test();
 d.getdata();
}