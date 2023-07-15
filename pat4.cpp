#include<iostream>
using namespace std;
int main() 
{
    int a,k;
    for(a=5;a>=1;a--){
        for(k=5;k>=a;k--){
            cout<<a<<" ";
        }
        cout<<"\n";
    }
}