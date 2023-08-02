#include<iostream>
using namespace std;
class Factorial
{
int a; 
public:
void Test()
{   
 }
};
class Name : public Factorial
{
 public:
 int Val;
 void Get()
{
 cout<<"ENter Any Num:";
 cin>>Val;
 }
};
class Derived : public Name   
{
 public:
 int Getdata()
{
 Name :: Get () ;                               
 int fact=1,i;
 for(i=1;i<=Val;i++)
{    
 fact=fact*i;    
}    
 cout<<"Factorial"<<Val<<"is:"<<fact<<endl;  
 }    
};
int main()
{
 Derived d;                                 
 d.Getdata();
 d.Test();
}