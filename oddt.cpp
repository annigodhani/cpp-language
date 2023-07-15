#include <iostream>
using namespace std;
int main() 
{
  int a,k=0,v;
  cout<<"Enter v:";
  cin>>v;
  for(a=1;a<=v;a+=2) 
  {
      k=k+a;
      cout<<" "<<a;
  }
      cout<<"\nTotal is:"<<k;
  }


