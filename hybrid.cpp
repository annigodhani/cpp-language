#include<iostream>
using namespace std;
class Base
{
protected:
int n;
public :
void SetN(int a)
    {
        n=a;
    }
};
class Derived1 : public Base
{
    protected :
    int m;
    public :
    void SetM(int k)
    {
        m=k;
    }
};
class Derived2 
{
    protected :
    int a;
    public :
    void SetA(int k)
    {
        a=k;
    }
};
class ABC : public Derived1 , public Derived2
{
    public :
    void Product ()
    {
        cout<<"Product Of A,M & N is:"<<a*m*n<<endl;
    }
};
int main()
{
    ABC z;
    z.SetN(5);
    z.SetM(10);
    z.SetA(15);
    z.Product();
}