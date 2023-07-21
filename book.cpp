#include<iostream>
using namespace std;
class Book
{
    private:
    int bookNo;
    char bookTitle[30];
    float price;
    float totalcost(int a)
    {
        return price*a;
    }
    public:
    void input()
    {
        cout<<"Enter book no:";
        cin>>bookNo;
        cout<<"Enter book title:";
        cin>>bookTitle;
        cout<<"Enter book price:";
        cin>>price;
    }

    void purchase()
    {
        int n;
        cout <<"Enter the number of copies to be purchased: ";
        cin>>n;
        float totalCost=totalcost(n);
        cout<<"Total cost to be paid:"<<totalCost<<endl;
    }
};
int main()
{
    Book b;
    b.input();
    b.purchase();
}