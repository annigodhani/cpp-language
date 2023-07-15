#include <iostream>
using namespace std;
int main() {
  int a,k=0;
  for(a=65;a<=90;a++) {
    k=a+32;
    cout<<char(a)<<char(k)<<" ";
  }
  return 0;
}