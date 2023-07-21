#include<iostream>
using namespace std;
class Flight
{
    private:
    int flightNo;
    char destination[30];
    float distance,Fuel;

    int CALFUEL()
    {
        if (distance<=1000)
        {
            Fuel=500;
        }
        else if (distance>1000 && distance<=2000)
        {
            Fuel=1100;
        }
        else
        {
           Fuel=2200;
        }
    }
    public:
    void FEEDINFO() 
    {
        cout<<"Enter flight no:";
        cin>>flightNo;
        cout<<"Enter Destination:";
        cin>>destination;
        cout<<"Enter Distance:";
        cin>>distance;

        CALFUEL();
    }
    void SHOWINFO()
    {
        cout<<"Flight number:"<<flightNo<<endl;
        cout<<"Destinatio:"<<destination<<endl;
        cout<<"Distance:"<<distance<<"km"<<endl;
        cout<<"Fuel:"<<Fuel<<"litter"<<endl;
    }
};
int main()
{
    Flight f;
    f.FEEDINFO();
    f.SHOWINFO();
}