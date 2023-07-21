#include<iostream>
using namespace std;
class Solid{
    int l=10,w=5,h=8;
    public:
    Solid()
    {
     cout<<"Volume of solid....."<<endl;
    }
    void getdata()
    {
     cout<<"Length value is:"<<l<<endl;
     cout<<"Width value is:"<<w<<endl;
     cout<<"Height value is:"<<h<<endl;   
    } 
    ~Solid()
    {
     cout<<"Volume of solid shape is:"<<l*w*h;    
    }  
};
int main()
{
    Solid s;
    s.getdata();
}