#include<iostream>
using namespace std;
    
    
    
int main(){
    
    
     int matrix[4][3];
     int rows =4;
     int colu =3;

     for(int i=0; i<rows; i++)
     {
        for(int j=0; j<colu; j++)
        {
            cin>>matrix[i][j];
        }
    
     }

     cout<<endl;
     for(int i=0; i<rows; i++)
     {
        for(int j=0; j<colu; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
     }
    
    
       return 0;
    
}