#include<iostream>
using namespace std;
int main() 
{
    int a,k;
    char ch='a';
    for(a='a';a<='e';a++){
        for(k='a';k<=a;k++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}