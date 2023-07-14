#include <iostream>
using namespace std;
int main() {
  char ch,vowel,cons;
cout << "Enter char:";
cin>>ch;
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
   || ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
       cout<<"Char is vowel";
}
else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
    cout<<"Char is cons";
}
    return 0;
}