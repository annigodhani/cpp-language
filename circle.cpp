#include <iostream>
using namespace std;
class Circle {
  public:
    Circle(double r) {
      cout<<r*r;
    }
    double area() {
      return 3.14*r*r;
    }
    void Showdata() {
      cout<<"The area of circle is:"<<r<<area()<<endl;
    }
  private:
    double r;
};
int main() {
  Circle c(2);
  c.Showdata();
  return 0;
}