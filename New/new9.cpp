#include<iostream>
using namespace std;
    
    
    
int main()
{
    cout<<"*************HELLO DEAR STUDENT*************"<<endl;
    float gpa;
    cout<<"*************ENTER Your Gpa*************"<<endl;
    cin>>gpa;

    if(gpa>=3.5)
    {
        cout<<"ENTER YOUR EXTRACURICULAR ACTIVITES HERE TO CHECK YOU ARE ABLE TO TAKE SCHOLARSHIP : \n";
        int activity;
        cin>>activity;
        if(activity==3){
            cout<<"Congratulations! you are qualified for fully scholrship "<<endl;
        }
        else if(activity>=1)
        {
            cout<<"GOOD ! you are qualified for partial scholarship"<<endl;
        }
        if (activity==0)
        {
            cout<<"Ohh ! you are not qualified for scholarship"<<endl;
        }
       

    }
    else 
    {
        cout<<"DEAR STUDENT ! you are not ready for scholarship because of our policy "<<endl;
    }
    
    
     
    
    
    return 0;
    
}