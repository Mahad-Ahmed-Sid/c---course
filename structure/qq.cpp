#include<iostream>
using namespace std;
    
struct {
    int id[10];
    string name[10];
    float salary[10];
    string department[10];
}emp;
    
int main(){
    emp.id[10];
    emp.name[10];
    emp.salary[10];
    emp.department[10];
    for(int i=0; i<10; i++){
        cout<<"ENTER EMPLOYEE ID : ";
        cin>>emp.id[i];
        
        cout<<endl;
        cout<<"ENTER NAME OF EMPLOYEEE : ";
        cin>>emp.name[i];

        cout<<endl;
        cout<<"Enter THEIR DEPARTMENT : ";
        cin>>emp.department[i];

        cout<<endl;
        cout<<"Enter THEIR SALARY : ";
        cin>>emp.salary[i];
        cout<<endl;
    }
 cout<<"EMPLOYEEE INFORMATION IS HERE : "<<endl;
    
    for(int i=0; i<10; i++)
{
    cout<<"THE"<<i<<"ID is : "<<emp.id[i]<<"   ,THE NAME IS : "<<emp.name[i]<<"  ,THE DEPARTMENT IS : "<<emp.department[i]<<"   ,THE SALARY IS : "<<emp.salary[i]<<endl;
    cout<<endl;
}
    
   int max= emp.salary[0];
   for(int i=0; i<10; i++){
    if(emp.salary[i]>max)
    {
        max = emp.salary[i];
    }
        
   }
   cout<<endl;
   cout<<"THE MAX SALARY IS "<<max<<endl;

   //for(int j=0; j<10; j++)
   

   
     


    system("pause");
    
       return 0;
    
}