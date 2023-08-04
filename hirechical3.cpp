#include<iostream>
using namespace std;
class Base
{
public:
void Teat()
{
 }
};
class Dreave1: public Base 
{
public:
int k,a=5;
 void Set ()
{
 for(k=1;k<=10;k++)
{
 a=5;
 cout<<"17"<<"*"<<k<<"="<<k*a<<endl;
  }
 }
};
class Dreave2: public Base
{
public:
int k,j;
void Reverse()
{
 cout<<"Enter The Num:"<<endl;
 cin>>j;
 for(k=j;k>=1;k--)
{
 cout<<" "<<k;
}
 //cout<<"enter the number :"<<endl;
// cin>>j;
 }
};
int main ()
{
 Dreave1  d1;
 d1.a;
 d1.k;
 d1.Set();
 d1.Teat();

 Dreave2 d2;
 d2.j;
 d2.k;
 d2.Reverse();
 d2.Teat();
}