#include<iostream>
using namespace std;

int main()
{
	int rows = 4, cols =3;
	int arr[4][3];
	
	cout<< "ENTER 12 elements (4 rows x 3 columns): \n";
	
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int minVal = arr[0][0];
	int maxVal = arr[0][0];
	
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; ++j)
		{
			if(arr[i][j]< minVal)
			minVal = arr[i][j];
			if(arr[i][j]>maxVal)
			maxVal = arr[i][j];
		}
	}
	
		cout<<"The Max value is : "<<maxVal<<endl;
		cout<<"The Min value is : "<<minVal<<endl;


	
	
	
	system("pause");
	
	return 0;
}