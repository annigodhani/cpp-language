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
int value;
void get()
{
 cout<<"ENter any number ";
 cin>>value;
 }
};
class Derived : public Factorial,protected Name   // protected name ni badle public name hoi to 
{
 public:
 int Getdata()
{
// Name :: Get();                               // name :: get (); no lakhavu pade and 
 int fact=1,i;
 cout<<"ENter Any Num:";                    // a line ne hu class name ma laigayo chu atle com. mari che 
 cin>>value;
for(i=1;i<=value;i++)
{    
 fact=fact*i;    
}    
 cout<<"Factorial is:"<<fact<<endl;  
 }    
};
int main()
{
    Derived d;
   // m. get();                                 // m. get(); jo publuic hoi to lakhavu pade 
    d.Getdata();
    d.Test();
}