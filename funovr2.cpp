#include <iostream>
using namespace std;
class Hallo {
 public:
 int test(int a)
 {
    return 3.14*a*a; 
 }
 int test(int l,int w)
 {
    return l*w;
 }
 double test(double t,double r)
 {
    return (t*r)/2;
 }
 int test(int a,int k,int l)
 {
    return (a*k*l)/100;
 }
};
int main()
{
    Hallo h;
    cout<<"Area of square:"<<h.test(6)<<endl;
    cout<<"Area of rectangle:"<<h.test(5,6)<<endl;
    cout<<"Area of triangle:"<<h.test(10.3,10.3)<<endl;
    cout<<"Simple intrest:"<<h.test(5,33,6)<<endl;
    }