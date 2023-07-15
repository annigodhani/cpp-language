#include<iostream>
using namespace std;
int main() 
{
    char a,k,ch=1;
    for(a='A';a<='o';a++){
        for(k='A';k<=a;k++)
            ch++;
            if(a%1==0){
            cout<<ch+95<<" ";
        }
        cout<<"\n";
    }
}