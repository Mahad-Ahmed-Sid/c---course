#include<iostream>
using namespace std;
    
    
    
int main(){
    
    
     cout<<"***********HELLO USER***********"<<endl;
     int t;
     cout<<"enter the no.(1-2) to check the temperatures  :"<<endl;
     cin>>t;

     switch(t){

        case 1:
        {
            float C;
            cout<<"Enter temperature in Celcius to change in  Farenheit :"<<endl;
            cin>>C;
            double F;
            F= (C*9/5)+32;
            cout<<"Here is Temperature in Farenheit :"<<F<<endl;
            break;
        }
        case 2:
        {
            float F;
            cout<<"Enter temperature in Farenheit to change in Celcius :"<<endl;
            cin>>F;
            double C;
            C= (F-32)*5/9;
            cout<<"Here is temperature in Celcius :"<<C<<endl;
            break;

        }
        default :
        cout<<"Invalid no. to check temperature "<<endl;
        break;
 
     }
    
    
     return 0;
    
}