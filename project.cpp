#include<iostream>
#include<string.h>
using namespace std;

class customer
{
     protected:
    string name,contact_number;
    public:
     void getinformation()
     {
          cout<<" <-------> Mitra's Fashion<-------> \n";
          cout<<"Enter Name : ";
          cin>>name;
          cout<<"Enter Contact Number : ";
          cin>>contact_number;
     }

     void showinformation()
     {
          cout<<"\n\t Name               : "<<name<<endl;
          cout<<"\n\t Contact Number     : "<<contact_number<<endl;
     }

};

class Show_bill : public customer 
{

    protected :   

      double  GST,discount,Net_bill,bill_amt =0 ;
      int   Bill =0 , quantity[10];

      string Ditems[10];

     public :

      int item1()
      {
         cout<<"\n \tEnter Qunatity :";
         cin>>quantity[0];
         cout<<"Quntity"<<quantity[0]<<endl;
         Ditems[0] = "Plain T-shart = 200 ";
         return Bill = Bill + quantity[0]*200;
      }

      int item2()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[1];
         cout<<"Quntity"<<quantity[1]<<endl;
         Ditems[1] = "Full Slive T-shart = 300 ";
         return Bill = Bill + quantity[1]*300;
      }

      int item3()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[2];
         cout<<"Quntity"<<quantity[2]<<endl;
         Ditems[2] = "Fancy T-shart = 400";
         return Bill = Bill + quantity[2]*400;
      }

      int item4()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quantity[3];
         cout<<"Quntity"<<quantity[3]<<endl;
         Ditems[3] = "Shart = 500";
         return Bill = Bill + quantity[3]*500;
      }

      int item5()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[4];
         cout<<"Quntity"<<quantity[4]<<endl;
         Ditems[4] = "Fancy Shart = 700";
         return Bill = Bill + quantity[4]*700;
      }

      int item6()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[5];
         cout<<"Quntity"<<quantity[5]<<endl;
         Ditems[5] = "Plain Pent = 300";
         return Bill = Bill + quantity[5]*300;
      }

      int item7()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[6];
         cout<<"Quntity"<<quantity[6]<<endl;
         Ditems[6] = "jeans = 800";
         return Bill = Bill + quantity[6]*800;
      }

      int item8()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[7];
         cout<<"Quntity"<<quantity[7]<<endl;
         Ditems[7] = "Coton Pent= 500";
         return Bill = Bill + quantity[7]*500;
      }

      int item9()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[8];
         cout<<"Quntity"<<quantity[8]<<endl;
         Ditems[8] = "Zara Pent = 1200";
         return Bill = Bill + quantity[8]*1200;
      }

      int item10()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[9];
         cout<<"Quntity"<<quantity[9]<<endl;
         Ditems[9] = "Zara Shart = 1000";
         return Bill = Bill + quantity[9]*1000;
      }

      int item11()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[10];
         cout<<"Quntity"<<quantity[10]<<endl;
         Ditems[10] = "Trouser = 900";
         return Bill = Bill + quantity[10]*900;
      }


      double Show_Bill_Amt()
      { 
         
         return bill_amt = bill_amt + Bill;
      }

      double Show_disc()
      {
         if (bill_amt >  1000 )
        {
            return discount = ( bill_amt *10  ) / 100; 
        }

        else 
        {
            return discount = 0;
        }
      }

      double Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
      }

      double Show_Net_bill()
      {
        return Net_bill =   bill_amt +  GST - discount  ;
      }
   
      void Show_Net_Bill()
      {
            Show_bill_Items();
            cout<<"\n\t Total Order price  : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t GST                : "<<Show_GST()<<endl;
            cout<<"\n\t Discount           : "<<Show_disc() <<endl;
            cout<<"\n\t Net Bill iS        : "<<Show_Net_bill()<<endl; 
      }

      void Show_bill_Items()
      {

         int i ;

         for(i=0;i<10;i++)
         {
         if(!Ditems[i].empty())
         {
            cout<<"\n\t "<<i+1<<":"<<Ditems[i]<<"\t"<<quantity[i]<<endl;
         }
         }
      }
};

int main ()
{

     Show_bill a ;
     
        a.getinformation();

        cout<<"\n\t\t\t :::::::::: Mitra's Fashion :::::::::: \n";
        cout<<" \n [1] Plain T-shart                : RS. 200 /- "; 
        cout<<" \n [2] Full-Slive T-shart           : RS. 300 /- "; 
        cout<<" \n [3] Fancy T-shart                : RS. 400 /- "; 
        cout<<" \n [4] Shart                        : RS. 500 /- ";
        cout<<" \n [5] Fancy Shart                  : RS. 700 /- ";
        cout<<" \n [6] Plain Pent                   : RS. 300 /- ";
        cout<<" \n [7] Jeans                        : RS. 800 /- ";
        cout<<" \n [8] Coton Pent                   : RS. 500 /- ";
        cout<<" \n [9] Zara Pent                    : RS. 1200 /- ";
        cout<<" \n [10] Zara Shart                  : RS. 1000 /- ";
        cout<<" \n [11] Trouser                     : RS. 900 /- \n ";
        cout<<" \n Confirm Your Order       [0]  \n";

        int choice ;

        do
        {
         cout<<"\n Enter your choice : ";
         cin>>choice ;
        switch (choice)
        {
        case 1: 
             a.item1();
             //cout<<" \n \t\t\t [1] Plain T-shart                : RS. 200 /- "; 
            break;
        case 2: 
             a.item2();
               //  cout<<" \n \t\t\t [2] Full-Slive T-shart           : RS. 300 /- "; 
            break;
        case 3: 
             a.item3(); 
               //  cout<<" \n \t\t\t [3] Fancy T-shart                : RS. 400 /- "; 
            break;
        case 4: 
             a.item4();
            // cout<<" \n \t\t\t [4] Shart                        : RS. 500 /- ";
            break;
        case 5: 
            a.item5();
            //  cout<<" \n \t\t\t [5]  Fancy Shart                  : RS. 700 /- ";
            break;
         case 6: 
             a.item6();
               //  cout<<" \n \t\t\t [6] Plain Pent                   : RS. 300 /- ";
            break;
         case 7: 
             a.item7();
               //  cout<<" \n \t\t\t [7] Jeans                        : RS. 800 /- ";
            break;
         case 8: 
             a.item8();
               //  cout<<" \n \t\t\t [8] Coton Pent                   : RS. 500 /- ";
            break;
         case 9: 
             a.item9();
               //  cout<<" \n \t\t\t [9] Zara Pent                    : RS. 1200 /- ";
            break;
         case 10: 
             a.item10();
               //  cout<<" \n \t\t\t [10] Zara Shart                  : RS. 1000 /- ";
            break;
         case 11: 
             a.item11();
               //  cout<<" \n \t\t\t [11] Trouser                     : RS. 900 /- \n ";
            break;
        case 0: 
           break;
        }

      } while (choice!=0);
   cout<<"\n\t\t\t :::::::::: Mitra's Fashion :::::::::: \n";
            a.showinformation();
            a.Show_Net_Bill();

}