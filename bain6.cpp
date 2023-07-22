#include<iostream>
using namespace std;
class Box {
int l,w,h;
public:
void Setdata(int a,int k,int v)
{
    l=a,w=k,h=v;
}
int Getdata()
{
    return l*w*h;
}
 Box operator&& (Box &n)
 {
    Box t;
    t.l=l&&n.l;
    t.w=w&&n.w;
    t.h=h&&n.h;
     return t;
 }
};
 int main()
 {
    Box x,y,z;
    x.Setdata (4,6,2);
    cout<<"Volume Of Box X is:"<<x.Getdata()<<endl;

    y.Setdata (1,3,5);
    cout<<"Volume Of Box Y is:"<<y.Getdata()<<endl;

    z=x&&y;
    cout<<"Volume Of Box Z is:"<<z.Getdata()<<endl;
 }