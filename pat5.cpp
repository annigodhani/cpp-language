#include<iostream>
using namespace std;
int main() 
{
    int a,k,v=1;
    for(a=1;a<=5;a++){
        for(k=1;k<=a;k++){
            cout<<v++<<" ";
        }
        cout<<"\n";
    }
}