#include<iostream>
using namespace std;

int main()
{
	int rows = 3, cols =3;
	int arr[3][3];
	
	cout<< "ENTER 9 elements of the first ARRAY (3 rows x 3 columns): \n";
	
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<endl;
    cout<<"The FIRST ARRAY IS :\n";
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
    cout<<endl;
    int arr1[rows][cols];
    cout<< "ENTER 9 elements of the second ARRAY (3 rows x 3 columns): \n";
	
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<endl;
    cout<<"THE SECOND ARRAY IS :"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}

    int add_arr2[3][3];

    for(int k=0; k<rows; k++)
    {
        for(int l=0; l<cols; l++){
           add_arr2[k][l] = arr[k][l] + arr1[k][l];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"THE THIRD ARRAY IS THERE WITH THE ADDITION OF FIRST AND SECOND :\n";

    for(int x=0; x<rows; x++)
    {
        for(int y=0; y<rows; y++)
        {
            cout<<add_arr2[x][y]<<" ";
        }
        cout<<endl;
    }


    system("pause");
    return 0;
}