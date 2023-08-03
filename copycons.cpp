#include<iostream>
using namespace std;
class Test
{
 int a,k;
 public:
 Test()
 {
   a=6,k=17;
   cout<<"Test Class Called......"<<endl;
   cout<<"Product Of A & K is:"<<a*k<<endl;
 }
Test(Test &j)
{
  cout<<"Copy Cons..."<<endl;
  cout<<"Product Of A & K is:"<<j.a*j.k<<endl;   
 }
};
 int main()
 {
    Test t;
    Test k(t);
 }