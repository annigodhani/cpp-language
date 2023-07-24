#include<iostream>
using namespace std;
class Number {
 int real,img;
 public:
 void Setdata(int a,int k)
 {
    real=a,img=k;
 }
 void Getdata()
 {
    cout<<"Num is:"<<real<<"+"<<img<<"i"<<endl;
 }
 Number operator++()
 {
 Number t;
 t.real=++real;
 t.img=++img;
 return t;
 }
};
 int main()
 {
    Number n,m;
    n.Setdata(2,5);
    n.Getdata();
    ++n;
    m=n;
    m.Getdata();
}
