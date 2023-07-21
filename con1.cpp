#include<iostream>
using namespace std;
class Area 
{
    public:
    Area()
    {
     int a=23;
     cout<<"Area of cricle:"<<3.14*a*a<<endl;
    }
    Area(int k)
    {
     cout<<"Area of square:"<<k*k<<endl;
    }
    Area(int l,int w)
    {
     cout<<"Area of rectuangle:"<<l*w<<endl;
    }
    Area (double a,double k)
    {
     cout<<"Area of triangle:"<<(a*k)/2<<endl;
    }

    Area(int a,int k,int l)
    {
     cout<<"Simple interst:"<<(a*k*l)/100<<endl; 
    }
};

int main ()
{
    Area a,k(5),l(6,6),d(7,8),e(3,45,4);    
}
