#include<iostream>
#include<sstream>
#include<string>
using namespace std;

string ones[10] = { "","one","two","three","four","five","six","seven","eight","nine" };
string teens[10] = { "","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" };
string tens[10] = { "","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };

string converthto(long long n)
{
  string str;
  if(n>=100)
  {
    str +=ones[n/100]+ " hundred ";
    n = n % 100;
  }
  if( n==10 || n>=20)
  {
    str += tens[n/10]+ " ";
    n = n % 10;
  }
  if(n<20 && n>10)
  {
     str+= teens[n%10]+ " ";
     n = n % 10;
  }
  else if(n>0)
  {
    str+=ones[n];
  }

  return str;
}



string convertnum(long long num)
{
    string result;
    if(num>=100000000000000LL)
    {
      result += converthto(num/1000000000000LL)+ " trillion ";
      num = num % 100000000000LL;
    }
    else if(num>=10000000000000LL)
{
    result += converthto(num/1000000000000LL)+ " trillion ";
    num = num % 100000000000LL;
}
else if(num>=1000000000000LL)
{
    result += ones[num/1000000000000LL]+ " trillion ";
    num = num % 1000000000000LL;
}
    if(num>=100000000000LL)
    {
      result += converthto(num / 1000000000)+ " billion ";
      num = num % 1000000000;
    }
    else if(num>=10000000000LL)
{
    result += converthto(num / 1000000000)+ " billion ";
    num = num % 1000000000;
}
else if(num>=1000000000)
{
    result += ones[num / 1000000000]+ " billion ";
    num = num % 1000000000;
    
}
    if(num>=100000000)
    {
      result += converthto(num / 1000000)+ " million ";
      num = num % 1000000;
    }
    else if(num>=10000000)
{
     result += converthto(num / 1000000)+ " million ";
      num = num % 1000000;
}
else if(num>=1000000)
{
    result += ones[num / 1000000]+ " million ";
    num = num % 1000000;
}
    if(num>=100000)
    {
      result += converthto(num/1000)+ " thousand ";
      num = num % 1000;
    }
    if(num>=10000)
  {
   result += converthto(num/1000)+ " thousand ";
    num = num % 1000;
  }
    if(num>=1000)
{
    result += ones[num / 1000]+ " thousand ";
    num = num % 1000;
}
    if(num>=100)
    {
      result += converthto(num);
    }
  
    
    return result;

}


int main() {
    // loop
    // while
  while (true)
  {
    cout<<" NOTE: IF YOU ENTER ANY STRING AUR FLOAT NUMBER PROGRAM WILL BE END AND STOP..."<<endl;
    cout<<"***********NOW CONTINUING PROGRAM**************"<<endl;
     long long no;
    cout<<"Enter any number and 0 for exit : ";
    cin>>no;
    
    if (no >= 10000000000000LL) {
        cout << "Bhai! Trillion se bada number daala hai\n";
    } 

    if(no==0)
    {
        cout<<"Program ends "<<endl;
        break;
    }
  if(cin.fail())
  {
    cout<<" AS I SAY TO YOU.. "<<endl;
    cout<<"INVALID OUTPUT ...... Program is terminating"<<endl;
    return 1;
  }
    cout << "HERE IS NO: " <<convertnum(no)<<endl;
  }
   system("pause");
    return 0;

}