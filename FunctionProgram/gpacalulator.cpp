#include<iostream>
#include<iomanip>
using namespace std;
    
struct {
    string subjects[7];
    float credithours[7];
    float gradepoints[7];
    string grade[7];
}gpa; 
    

float gpacalculator(float* credithours, float* gradepoints, int size)
{
    float creditearns=0,totalcredithours=0;
     for(int i=0; i<size; i++)
     {
        creditearns += credithours[i]*gradepoints[i];
        totalcredithours +=credithours[i];
    }

    return creditearns/totalcredithours;
}

int main(){

    int size;
cout<<"ENTER HOW MANY COURSES/SUBJECTS YOU HAVE : ";
    cin>>size;
    
    gpa.subjects[size];
    gpa.credithours[size];
    gpa.gradepoints[size];
    gpa.grade[size];

    for(int i=0; i<size; i++)
    {
        cout<<"ENTER THE SUBJECT NAME : ";
        cin>>gpa.subjects[i];
        cout<<endl;
        

        cout<<"ENTER THE SUBJECT GRADE THAT YOU ACHIEVED : ";
        cin>>gpa.grade[i];
        cout<<endl;
        cout<<"ENTER THE SUBJECT GRADE POINTS On BEHALF OF YOURS GRADE : ";
        cin>>gpa.gradepoints[i];
        cout<<endl;

        cout<<"ENTER THE SUBJECT CREDIT HOURS HERE : ";
        cin>>gpa.credithours[i];
        cout<<endl;
    }
    
    cout<<setw(15)<<"SUBJECTS "<<setw(20)<<" CREDIT HOURS "<<setw(20)<<" GRADE "<<setw(20)<<"  GRADE POINTS"<<endl;
    for(int j=0; j<size; j++)
    {
        cout<<setw(15)<<gpa.subjects[j]<<setw(20);
        cout<<gpa.credithours[j]<<setw(20);
        cout<<gpa.grade[j]<<setw(20);
        cout<<gpa.gradepoints[j]<<endl;
        
    }

   cout<<setw(30)<<"YOUR GPA IS "<<gpacalculator(gpa.credithours,gpa.gradepoints,size)<<endl;

    
     
    
    system("pause");
    return 0;
    
}