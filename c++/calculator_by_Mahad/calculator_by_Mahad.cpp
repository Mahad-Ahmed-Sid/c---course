#include<iostream>
using namespace std;


float add(float x, float y)
{
  return x+y;
}
float sub(float x, float y)
{
  return x-y;
}
float mul(float x, float y)
{
  return x*y;
}
float divide(float x, float y)
{
  return x/y;
}

int main()
{


   cout<<"*** Welcome to our calculator program ***"<<endl;

   float n1,n2,answer;

   while(true) 
   {
        cout<<"Enter the value of number 1"<<endl;
        cin>>n1;
        cout<<"enter the value of number 2"<<endl;
        cin>>n2;
     
        cout<<"Press A for addition,Press S for subtraction,Press M for multiplication,Press D for division"<<endl;

         
        char input;
        cin>>input;

        switch (input)
        {
            case 'A':
          answer= add(n1,n2);
          break;
          
            case 'S':
          answer= sub(n1,n2);
          break;

            case 'M':
          answer= mul(n1,n2);
          break;

            case 'D':
          answer= divide(n1,n2);
          break;
        }

        cout << "Your Answer is : "<<answer<<endl;

        cout << "Press any key tto continue ... Press Q to quit"<<endl;

        cin>>input;

        if(input == 'Q') break;
       
    }








   return 0;

}
