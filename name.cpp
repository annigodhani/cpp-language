#include<iostream>
using namespace std;
class Report 
{
    private:
    int adno,a;
    char name[20];
    float mark[5],average,sum=0;
    void GETAVG()
    {
        for (a=0;a<5;a++)
        {
         sum=sum+mark[a];
        }
        average=sum/5;      
    }
    public:
    void READINFO()
    {
        cout<<"Enter the admission number:";
        cin>>adno;
        cout<<"Enter a name:";
        cin>>name;
        cout<<"Enter a mark for 5 subject";
        for(a=0;a<5;a++)
        {
         cin>>mark[a];
    }
        cout<<endl;
        GETAVG(); 
    }
    void DISPLAYINFO()
    {
        cout<<"Admission number:"<<adno<<endl;
        cout<<"Name:"<<name<<endl;
        for (a=0;a<5;a++) 
        {
        cout <<mark[a]<<endl;
        }
        cout<<"Average:"<<average<<endl;
    }
};
int main()
{
    Report r;
    r.READINFO();
    r.DISPLAYINFO();
}