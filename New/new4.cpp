#include<iostream>
using namespace std;
    
int main()
{
     cout<<"HELLO USER"<<endl;
     int a;
     cout<<"ENTER YOUR SALARY AMOUNT HERE \n";
     cin>>a;
       float t=0.0;
     if(a<30000)
     {
        t= 0.0;
        cout<<"NO TAX WILL BE DEDUCTED \n";
     }
     else if (a<=50000 ){
        t= a*0.05;
     }
     else if(a<=100000){
        t= a*0.10;
     }
     else 
     {
       t= a*0.20;
     }
    
   cout<<"YOUR TAX IS :"<<t<<endl;
   return 0;
}