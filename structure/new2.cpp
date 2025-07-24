#include<iostream>
using namespace std;

float kilometer_to_miles(float km){
	float miles = km*0.621371;
	cout<<"KILOMETER TO MILES IS :  "<<miles<<" m"<<endl;
	return miles;
	
}
float pounds_to_kilograms(float pp){
	float kilograms = pp * 0.45359237;
	cout<<"POUNDS TO kilograms IS :  "<<kilograms<<" Kg"<<endl;
	return kilograms;
	
}

int main(){
	
	
	
	int no;
	cout<<"ENTER ANY NUMBER 1-2 : "<<endl;
	cout<<"choose 1 for distance changing: "<<endl;
	cout<<"choose 2 for weight changing: "<<endl;
	cin>>no;
	
	switch (no){
		case 1:
        float kk;
	      cout<<"ENTER VALUE OF KILOMETER :"<<endl;
	        cin>>kk;
			
			kilometer_to_miles(kk);
			break;
			
			case 2:
            	float p1;
	         cout<<"ENTER VALUE OF POUNDS :"<<endl;
	        cin>>p1;
	
			pounds_to_kilograms(p1);
			break;
			default : 
			cout<<" WRONG CHOICE "<<endl;\
			break;
	}
	system("pause");
	return 0;
}
