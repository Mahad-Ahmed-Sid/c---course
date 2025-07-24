#include<iostream>
using namespace std;
    
    
    
int main(){
    
    
     
     int matrix[4][3];
     int rows =4;
     int colu =3;
     int max = matrix[0][0];
     int min = matrix[0][0];
      
      
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
     for(int i=0; i<rows; i++)
     {
        for(int j=0; j<colu; j++)
        {
            if(max>matrix[i][j])
            {
              max = matrix[i][j];
            }
            if(min<matrix[i][j])
            {
                min = matrix[i][j];
            }
        }
       
     }




    cout<<"THE MAX VALUE : "<<max<<endl;
    cout<<"THE MIN VALUE : "<<min<<endl;
   
 

    
    
       return 0;
    
}