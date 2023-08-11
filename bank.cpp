#include <iostream>
#include <string>
using namespace std;
class BankAccount 
{
private:
string accountNumber;
string accountHolderName;
double balance;
public:
BankAccount(const string& number,const string& name, 
double initialBalance)
:accountNumber(number),accountHolderName(name), 
balance(initialBalance) 
{
}
void Deposit(double amount)
{
 if(amount > 0) 
{
 balance += amount;
 cout<<"Deposit Successful. New Balance:"<<balance<<endl;
} 
else
{
 cout<<"Invalid Deposit Amount."<<endl;
 }
}
void Withdraw(double amount) 
{
 if(amount > 0 && amount <= balance) 
{
 balance -= amount;
 cout<<"Withdrawal Successful. New Balance:"<<balance<<endl;
} 
 else 
{
 cout <<"Invalid Withdrawal Amount."<<endl;
 }
}
 double GetBalance() const 
{
 return balance;
}
 void DisplayAccountInfo() const 
{
 cout<<"Account Number:"<<accountNumber<<endl;
 cout<<"Account Holder:"<<accountHolderName<<endl;
 cout<<"Balance:"<<balance<<endl;
 }
};
int main() 
{
 BankAccount account("123456", "John Doe", 1000.0);
 int choice;
 double amount;
do 
{
 cout<<"1.Deposit"<<endl;
 cout<<"2.Withdraw"<<endl;
 cout<<"3.Check Balance"<<endl;
 cout<<"4.Display Account Info"<<endl;
 cout<<"5.Exit"<<endl;
 cout<<"Enter your choice: ";
 cin>>choice;

switch (choice) 
{
 case 1:
 cout<<"Enter Deposit Amount:";
 cin>>amount;
 account.Deposit(amount);
 break;

 case 2:
 cout<<"Enter Withdrawal Amount:";
 cin>>amount;
 account.Withdraw(amount);
 break;

case 3:
cout<<"Account Balance:"<<account.GetBalance()<<endl;
break;

case 4:
account.DisplayAccountInfo();
break;

case 5:
cout<<"Exiting Program."<<endl;
break;

default:
cout<<"Invalid Choice. Please Try Again."<<endl;
 }
}
 while (choice !=5);

    return 0;
}