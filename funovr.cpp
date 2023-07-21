#include <iostream>
using namespace std;
class Hallo {
 public:
 int test(int a)
 {
    return a*a;
 }
 int test(int a,int k)
 {
    return a*k;
 }
 double test(double a)
 {
    return a*a*a;
 }
 int test(int a,int k,int l)
 {
    return a+k+l;
 }
};
int main()
{
    Hallo h;
    cout<<"Addition of a,k,l is:"<<h.test(5,6,9)<<endl;
    cout<<"Cube of a is:"<<h.test(5.6)<<endl;
    cout<<"Rectangle of a,k is:"<<h.test(5,6)<<endl;
    cout<<"Double of a is:"<<h.test(5.33)<<endl;
    }