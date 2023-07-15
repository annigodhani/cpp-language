#include <iostream>
using namespace std;
int main() {
  char ch;
  int a;
  for(a='A';a<='Z';a++) {
    ch=a;
    cout<<ch<<"-"<<(int)ch<<" ";
  }
  return 0;
}