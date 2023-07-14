#include<iostream>
using namespace std;
int main()
{
 int a;
 cout<<"Enter marks a:";
 cin>>a;
 if(a>=75) {
 cout<<"Gread A";
 }
 else if(a>=60&&a<75) {
   cout<<"Gread B";
 }
 else if(a>=45&&a<60) {
   cout<<"Gread C";
}
else if(a>=35&&a<45) {
   cout<<"Gread D";
}
else {
   cout<<"Fail";
}
}