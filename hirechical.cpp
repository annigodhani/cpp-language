#include<iostream>
using namespace std;
class Base
{
 protected:
 int n;
 public:
 void SetN(int a)
{
  n=a;
 }
};
 class Derived1 : public Base 
{
  public:
  int m;
  void SetM(int b)
{
  m=b;
}   
  void Product()
{
  cout<<"Product of M and N is:"<<m*n<<endl;
 }
};
  class Derived2 : public Base 
{
  public:
  int a;
  void SetA(int b)
{
  a=b;
}   
void Add()
{
 cout<<"Product of M and N  is:"<<a+n<<endl;
 }
};
 int main()
{
 Derived1 d1;
 d1.SetN(5);
 d1.SetM(15);
 d1.Product();

 Derived2 d2;
 d2.SetN(15);
 d2.SetA(8);
 d2.Add();
}