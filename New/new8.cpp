#include<iostream>
using namespace std;
    
    
    
int main(){
    int i;
    cin>>i;
    while(i>0)
    { 
        if(i%2==0)
        {
            cout<<"even \n";
        }
        else{
            cout<<"odd \n";
        }
        i-=i;
        
    }
   

    return 0;
    
}