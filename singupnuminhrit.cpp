#include<iostream>
using namespace std;
class square
{
 int a;
 protected:
 int b;
 public:
 void Test()
{
 }
};
class Derived : public square
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