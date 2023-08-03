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
class Name{
public:
int val;
void Get()
{
 cout<<"Enter Any Num:";
 cin>>val;
 }
};
class Derived : public Factorial,protected Name   // protected name ni badle public name hoi to 
{
 public:
 int Getdata()
{
 //Name :: Get();                               // name :: get (); no lakhavu pade and 
 int fact=1,i;
 cout<<"Enter Any Num:";                    // a line ne hu class name ma laigayo chu atle com. mari che 
 cin>>val;
for(i=1;i<=val;i++)
{    
 fact=fact*i;    
}    
 cout<<"Factorial is:"<<fact<<endl;  
 }    
};
int main()
{
    Derived d;
    // d.Get();                                 // m. get(); jo publuic hoi to lakhavu pade 
    d.Getdata();
    d.Test();
}