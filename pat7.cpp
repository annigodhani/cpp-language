#include<iostream>
using namespace std;
int main() 
{
    int a,k;
    char ch='A';
    for(a='A';a<='E';a++){
        for(k='A';k<=a;k++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}