#include<iostream>
using namespace std;

int main()
{

int marks;

cout<<" Enter marks \n" ;
cin>>marks;

if( marks > 100 || marks < 0 ) cout << " Invalid marks, enter between 0 and 100 ";
else if( marks < 60 ) cout << " Fail ";
else if( marks < 70 ) cout << " Grade B ";
else if( marks < 80 ) cout << " Grade A ";
else if( marks < 100 ) cout << " Grade A+ ";

system("Pause");

return 0;
 
}


