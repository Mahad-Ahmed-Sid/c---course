#include<iostream>
using namespace std;

int gcd(int a, int b)
{
   while(b!=0){
      int temp = b;
      b = a % b;
      a = temp;
   }
   cout<<"THE GCD IS : "<<a<<endl;
   return a;
}

int lcm(int a, int b)
{
   int c = (a/ gcd(a,b) * b) ;
   cout<<"LCM  OF "<<a<< " and " <<b<<" is: "<<c<<endl;
   return c;
}
int main(){
   
  int a,b;
  cout<<"ENTER 1st VALUE ";
  cin>>a;
  cout<<"Enter 2nd Value ";
  cin>>b;
  

  gcd(a,b);
 lcm(a,b);



   system("pause");

   return 0;
    
}