#include <iostream>
using namespace std;
int main() 
{
  int a,k;
  cout<<"Enter k:";
  cin>>k;
  for(a=1;a<=k;a++) 
   if(a%2==0)
  {
      cout<<" "<<a*a;
  }
  else {
    cout<<" "<<a;
  }
    return 0;
  }


