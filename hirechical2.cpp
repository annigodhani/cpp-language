#include <iostream>
using namespace std;
class Table 
{
  protected:
  int Num; 
  public:
 Table(int k) 
{
  Num =k;  
}
 void Table1() 
 {
 cout<<"Table  is "<<Num<<endl;
 for (int a=1;a<=10;a++) 
 {
 cout<<Num<<"*"<<a<<"="<<Num*a<<endl;
   }
  }
};
class RevTab : public Table 
{
  public:
  RevTab(int k) : Table(k) 
  {
  }
   void RevTab2() {
   cout<<"Reverse table is "<<Num<<endl;
   for(int a=10;a>=1;a--) 
   {
   cout<<Num<<"*"<<a<<"="<<Num*a<<endl;
  }
 }
};
int main() 
{
  RevTab rt(38);
  rt.Table1();
  rt.RevTab2();
}
