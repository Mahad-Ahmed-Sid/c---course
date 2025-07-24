#include<iostream>
using namespace std;
    
    
    
int main(){
    
    
     int a;
     int b;
     int R;

     cout<<"enter the 1st value = ";
     cin>>a;

     cout<<"enter the 2nd value = ";
     cin>>b;

     if (a>=0 && b>=0)
     {
        R = a + b;
        cout<<R<<endl;
     }

     else {
        cout<<"enter positive no.";
     }
    
    
     return 0;
    
}