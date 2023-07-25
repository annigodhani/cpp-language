#include<iostream>
using namespace std;
class Rect{
int l,b;
friend Rect add(Rect,Rect,Rect);
public:
void Setdata(int x,int y)
{
 l=x,b=y;
}
 void Getdata()
{
  cout<<"Area is:"<<l*b<<endl;
}
};
Rect add(Rect x,Rect y,Rect z)
{
 Rect t;
  t.l=x.l+y.l+z.l;
  t.b=x.b+y.b+z.b;
  return t;
}
 int main()
 {
    Rect a,k,v,n;
    a.Setdata(2,3);
    a.Getdata();
    k.Setdata(6,4);
    k.Getdata();
    v.Setdata(5,9);
    v.Getdata();
    n=add(a,k,v);
    n.Getdata();
 }