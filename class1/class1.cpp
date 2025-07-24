
#include<iostream>
using namespace std;




int main()
{
    cout<< "** Welcome to calculator program ** \n";
    cout<< "Enter two numbers \n";

float n1,n2;

    cout<< " \n Enter the value of number 1: ";
    cin>>n1;
    cout<< " \n Enter the value of number 2: ";
    cin>>n2;

float sum,sub,mul,div;

     sum= n1+n2;
     sub= n1-n2;
     mul= n1*n2;
     div= n1/n2;

    cout<<" \n The sum of n1 and n2 = "<<sum;
    cout<<" \n The difference of n1 and n2 = "<<sub;
    cout<<" \n The multiplication of n1 and n2 = "<<mul;
    cout<<" \n The division of n1 and n2 = "<<div;

    cout<<" \n Thankyou for using my program , byebye";

    system ("pause");
    
    return 0;

}
