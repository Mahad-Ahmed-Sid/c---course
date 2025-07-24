#include<iostream>
using namespace std;

class User {

   private:
   string name;
   string password;

   public:

   double balance=0;

   User ( string a, string b )
   {
      name = a;
      password = b;
   }

   bool checkpassword (string pass)
   {
      if (pass == password) { cout<<"Password is OK"; return 1; }
      else { cout<<"Wrong Password"; return 0; }
   }

   bool checkname (string nam)
   {
      if (nam == name) { cout<<"Name OK"; return 1; }
      else { cout<<"Invalid username"; return 0; }
   }



};

int startmenu()
{
   cout<< "******* Main Menu ********"<<endl;
   cout<< " 1- Balance "<<endl;
   cout<< " 2- Deposit "<<endl;
   cout<< " 3- Withdraw "<<endl;
   cout<< " 4- Exit "<<endl;
   cout<< " Selection : ";

   int op;
   cin>>op;

   return op;


};

/// @brief 
/// @return 
int main()
{


   User u1 = User ( "Mahad" , "1234" );

   string n,p;


   cout<< " *** Welcome to ATM application *** "<<endl;
   cout<< " *** Enter username *** "<<endl;
   cin>>n;

   cout<< " *** Enter password *** "<<endl;
   cin>>p;

   if( u1.checkname(n) && u1.checkpassword(p) )
   {
    start:
      int i;
      i=startmenu();

      switch (i){
      case 1 : {cout<< "Your current account balance is: "<< u1.balance << endl; break; };
      case 2 :

      {
         double dep;
         cout<< "Enter the amount to deposite : ";
         cin>> dep;
         u1.balance+=dep;
         break;

      };

      case 3 :
      {
         double wd;
         cout<< "Enter the amount to withdraw : "<<endl;
         cin>> wd;

         if ( wd > u1.balance) cout<< "In sufficient funds"<<endl;
         else u1.balance-=wd;
         break;

      };

      case 4 : break;
   
      };
   

   

   cout<< "** Would you like to continue :**"<<endl;
   cout<< " 1.Yes "<<endl;
   cout<< " 2.No "<<endl;
   cout<< "Selection : ";

   int in;
   cin>> in;

   if (in == 1) { system("cls"); goto start; }



   };










}