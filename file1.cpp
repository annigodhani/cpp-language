#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ofstream Hallo("akv.txt");
 if(Hallo.is_open())
 {
  Hallo<<"CPP Language\n";
  Hallo<<"Wel Come"<<endl;
  Hallo<<"Thank YOu For Wisiting";
  Hallo.close();
 }
 else
 {
  cout<<"File Opening Is Fail.";
 }
}