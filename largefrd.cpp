#include<iostream>
using namespace std;
class Large{
public:
int a,k;
void Setdata()
{
 cout<<"Enter number:";
 cin>>a>>k;
}
friend Large find(Large l);
};
void Getdata(Large l)
{
 if(l.a>l.k)
 {
  cout<<"Number is large:"<<l.a;
 }
 else
 {
  cout<<"Number is large:"<<l.k;
 }
}
 int main()
 {
   Large l;
   l.Setdata();
   Getdata(l);
 }