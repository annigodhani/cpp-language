#include<iostream>
using namespace std;
class Base1
{
 protected:
 int a;
 public:
 void setJ()
 {
   cout<<"Enter A:";
   cin>>a;
 }
};
 class Base2
 {
  protected:
  int k;
  void setB()
  {
    cout<<"Enter K:";
    cin>>k;   
  }
 };
 class Derived : public Base1, protected Base2
 {
  public:
  void Product()
  {
    Base2 :: setB();
    cout<<"Product of A and K is:"<<a*k<<endl;
  }
 };
  int main()
  {
    Derived d;
    d.setJ();
    d.Product();
  }
