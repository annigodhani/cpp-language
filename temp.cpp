#include<iostream>
using namespace std;
template<class T>
void Display(T aa)
{
  cout<<"Display Template is:"<<aa<<endl;;
}
template<class x,class y>
void Add(x a,y k)
{
  cout<<"Addition is:"<<a+k<<endl;
}
 int main()
 {
  Display(17);
  Display(17.63);
  Display('A');
  Add(17,7);
  Add(17,7.6);
  Add('A',7.9);
 }
