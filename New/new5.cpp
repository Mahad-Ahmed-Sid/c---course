#include<iostream>
using namespace std;

int main()
{
    cout<<"_________________ HELLO DEAR STUDENT __________________"<<endl;
    int marks;
    cout<<"Enter your marks here dear student :"<<endl;
    cin>>marks;
    //char grade;

   
     
        if(marks>=90 && marks<100){
            cout<<"Your grade is : A"<<endl;
        }
        else if (marks<90 && marks>=80)
        {
            cout<<"Your grade is : B"<<endl;
        }
        else if (marks>=70 && marks<80)
        {
           cout<<"Your grade is : C"<<endl;
        }
        else if (marks<70 && marks>=60)
        {
            cout<<"Your grade is : D"<<endl;
        }
    
     else if (marks<60){
       cout<<"Your grade is : F"<<endl; 
    }
    else {
        cout<<"Invalid marks enter again b/w (0-100)"<<endl;
    }


  








    return 0;
}