#include<iostream>
using namespace std;

int main()
{
		int rows = 3, cols =3;
	int arr[4][3];
	
	cout<< "ENTER 9 elements (3 rows x 3 columns): \n";
	
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cin>>arr[i][j];
		}
        cout<<endl;
	}
	cout<<endl;
    cout<<"THE ARRAY IS : \n";
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
  
	int cube[rows][cols];
	for(int i=0; i<rows; i++)
	{
		
		for(int j=0; j<cols; j++){
			cube[i][j] = arr[i][j]*arr[i][j]*arr[i][j];
			
		}
	    cout<<endl;
	}
	cout<<endl;
    cout<<"ThE CUBE OF THE ARRAY IS : \n";
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<cube[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	system ("pause");
	return 0;
}