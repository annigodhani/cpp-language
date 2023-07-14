#include<iostream>
using namespace std;
int main()
{
 float bas,hra,da,gross;
 cout<<"Enter Bas:";
 cin>>bas;
 if(bas<5000) {
 hra=bas*0.08;
 da=bas*0.2;
 }
 else if(bas<=10,000) {
   hra=bas*0.12;
   da=bas*0.3;
 }
 else if(bas<=15,000) {
   hra=bas*0.15;
   da=bas*0.4;
 }
 else {
   hra=bas*0.2;
   da=bas*0.5;
 }
 gross=bas+hra+da;
 cout<<"Hra is:"<<hra;
 cout<<"\nDa is:"<<da;
 cout<<"\nBas is:"<<bas;
 }