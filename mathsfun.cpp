#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Ans is:"<<ceil(2.9)<<endl;
    cout<<"Ans is:"<<floor(2.8)<<endl;
    cout<<"Ans is:"<<round(2.7)<<endl;
    cout<<"Ans is:"<<sqrt(16)<<endl;
    cout<<"Ans is:"<<abs(2.6)<<endl;
    cout<<"Ans is:"<<pow(2,5)<<endl;
    cout<<"Ans is:"<<rand()%20<<endl;

    int a,k,j;
    a=rand()%99;
    k=rand()%50;
    j=rand()%30;
    cout<<"Value of A:"<<a<<endl;
    cout<<"Value of K:"<<k<<endl;
    cout<<"Value of J:"<<j<<endl;
}