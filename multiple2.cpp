#include<iostream>
using namespace std;
class Square
{
 int a;
 protected:
 int b;    
};
class Sqr{
public:
void Test()
{
 }
};
class Derived : public Square , public Sqr
{
 public:
 int Getdata()
{
 int j,k;
 cout<<"Enter Val K:";
 cin>>k;
 for(j=0;j<=k;j++)
{
 cout<<"\t"<<j;
 cout<<"\t"<<j*j;
  }
 }
};   
int main()
{
 Derived d;
 d.Test();
 d.Getdata();
}