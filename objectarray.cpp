#include<iostream>
using namespace std;
class Hello{
    int n;
    public:
 void setn()
 {
    cout<<"Enter N:";
    cin>>n;
 }
 void getn()
 {
    cout<<"Enter N:"<<n<<endl;
 }
};
int main()
{
    Hello a[5];
    int i;
    for(i=0;i<2;i++)
    {
        a[i].setn();
    }
      for(i=0;i<2;i++)
    {
        a[i].getn();
    }
}