#include<iostream>
using namespace std;
class Volum{
    public:
    int Cal(int a)
    {
        return a*a*a;
    }
    double Cal(double a)
    {
        return 4/3*3.14*a*a*a;
    }
    float Cal(float r,float l)
    {
        return 3.14*r*l;
    }
    int Cal(int a,int k,int l)
    {
        return a*k*l;
    }
};
int main()
{
    Volum v;
    cout<<"Volum of cabe is:"<<v.Cal(8)<<endl;
    cout<<"Volum os sphere is:"<<v.Cal(2.5)<<endl;
    cout<<"Volum of cone is:"<<v.Cal(6,5)<<endl;
    cout<<"Volum of rectengle is:"<<v.Cal(5,4,7)<<endl;
}