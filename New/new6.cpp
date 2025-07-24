#include<iostream>
using namespace std;
    
    
    
int main(){
    
    
     int salary;
     cout<<"Enter your monthly salary :\n";
     cin>>salary;

     float savingspermonth;
     savingspermonth = salary*0.15;

     float ts;
     ts = savingspermonth*12;

     float zakat;
     zakat = ts*0.025;


     cout<<"YOUR SAVINGS PER MONTH IS :"<<savingspermonth<<endl;
     cout<<"YOUR TOTAL SAVING IS :"<<ts<<endl;
     cout<<"YOU HAVE TO GIVE THIS AMOUNT OF ZAKAT :"<<zakat<<endl;


    
    
     return 0;
    
}