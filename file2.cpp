#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 string Srg;
 ifstream Filestream("akv.txt");
 if(Filestream.is_open())
 {
   while(getline(Filestream,Srg))
   {
    cout<<Srg<<endl;
   }
 }
 else
 {
  cout<<"File Opening Is Fail.";
 } 
}