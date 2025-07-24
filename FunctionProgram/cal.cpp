#include<iostream>
#include<cmath>
using namespace std;
    
int add(int a, int b)  
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
float div(float a, float b)
{
    return a/b;
}
long mul(long a, long b)
{
    return a*b;
}
long mod(long a, long b)
{
    return a % b;
}

long power(long a, long b)
{
    return pow(a,b);
}

double square_root(double num)
{
    return sqrt(num);
}

double roundoff(double no)
{
    return roundoff(no);
}
double trignometric1(double no)
{
    return sin(no);
}
double trignometric2(double no)
{
    return cos(no);
}
double trignometric3(double no)
{
    return tan(no);
}

    
int main(){

   start:
   int n;
   cout<<"Enter no. 1-11 to perform task in Calculator : "<<endl;
   cout<<" 1-Addition  "<<endl;
   cout<<" 2-Subtraction  "<<endl;
   cout<<" 3-Division  "<<endl;
   cout<<" 4-Multiplication  "<<endl;
   cout<<" 5-Modulus  "<<endl;
   cout<<" 6-Power"<<endl;
   cout<<" 7-Square "<<endl;
   cout<<" 8-Roundoff Decimal  "<<endl;
   cout<<" 9-Sin value  "<<endl;
   cout<<" 10-Cos Value  "<<endl;
   cout<<" 11-Tan value  "<<endl;
   cout<<" Enter no : ";
   cin>>n;
   switch (n){
    case 1: 
    {
        int n1,n2;
        cout<<"Enter two no. for ADDITION"<<endl;
        cin>>n1;
        cin>>n2;
        cout<<"The Ans of "<<n1<<" and "<<n2<<" is "<<add(n1,n2)<<endl;
        break;

    }
    case 2: 
    {
        int n1,n2;
        cout<<"Enter two no. for SUbTRACTION"<<endl;
        cin>>n1;
        cin>>n2;
        cout<<"The Ans of "<<n1<<" and "<<n2<<" is "<<sub(n1,n2)<<endl;
        break;

    }
    case 3: 
    {
        float n1,n2;
        cout<<"Enter two no. for DIVISION"<<endl;
        cin>>n1;
        cin>>n2;
        cout<<"The Ans of "<<n1<<" and "<<n2<<" is "<<div(n1,n2)<<endl;
        break;

    }
    case 4: 
    {
        long n1,n2;
        cout<<"Enter two no. for MULTIPLICATION"<<endl;
        cin>>n1;
        cin>>n2;
        cout<<"The Ans of "<<n1<<" and "<<n2<<" is "<<mul(n1,n2)<<endl;
        break;

    }
    case 5: 
    {
        long n1,n2;
        cout<<"Enter two no. for Modulus"<<endl;
        cin>>n1;
        cin>>n2;
        cout<<"The Ans of "<<n1<<" and "<<n2<<" is "<<mod(n1,n2)<<endl;
        break;

    }
    case 6: 
    {
        long n1,n2;
        cout<<"Enter two no. to find power"<<endl;
        cin>>n1;
        cin>>n2;
        cout<<"The Ans of "<<n1<<" and "<<n2<<" is "<<power(n1,n2)<<endl;
        break;

    }
    case 7: 
    {
        double n1;
        cout<<"Enter a no. to find its square root"<<endl;
        cin>>n1;
        cout<<"The Ans of "<<n1<<" is "<<square_root(n1)<<endl;
        break;

    }
    case 8: 
    {
        double n1;
        cout<<"Enter a no. to find its Roundoff"<<endl;
        cin>>n1;
        cout<<"The Ans of "<<n1<<" is "<<roundoff(n1)<<endl;
        break;

    }
    
    case 9: 
    {
        double n1;
        cout<<"Enter a no. to find sin value"<<endl;
        cin>>n1;
        
        cout<<"The Ans of "<<n1<<" is "<<trignometric1(n1)<<endl;
        break;

    }
    case 10: 
    {
        double n1;
        cout<<"Enter a no. to find cos value"<<endl;
        cin>>n1;
        
        cout<<"The Ans of "<<n1<<" is "<<trignometric2(n1)<<endl;
        break;

    }
    case 11: 
    {
        double n1;
        cout<<"Enter a no. to find tan value"<<endl;
        cin>>n1;
       
        cout<<"The Ans of "<<n1<<" is "<<trignometric3(n1)<<endl;
        break;

    }
    default: 
    {
       cout<<"Syntax error"<<endl;
        break;

    }
   }
    

    cout<<"WOULD YOU LIKE TO CONTINUE : "<<endl;
    cout<<" PRESS 1 to perform Calculations : "<<endl;
    cout<<" Press 2 to turn off calculator : "<<endl;

    int in;
   cin>> in;

   if (in == 1) { system("cls"); goto start; }
    
    
     system("pause");
    
    
    return 0;
    
}