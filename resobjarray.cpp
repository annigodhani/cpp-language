#include<iostream>
using namespace std;
class Marks{
    int a,s,e; 
    public:
    void Setdata()
    {
      cout<<"Enter Account Marks:";
      cin>>a;
      cout<<"Enter Stat Marks:";
      cin>>s;
      cout<<"Enter English Marks:";
      cin>>e;      
    }
    void Getdata()
    {
      cout<<"Total:"<<a+s+e<<endl;
     }
};
int main()
{
 Marks a[3];
    for(int k=0;k<3;k++)
    {
     cout<<"Enter the marks of student"<<k+1<<endl;
     a[k].Setdata();   
    }
    for(int k=0;k<3;k++)
    {
        a[k].Getdata();
    }
}