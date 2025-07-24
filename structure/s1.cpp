#include<iostream>
#include<vector>
using namespace std;
    
int binarySearch( int array[],int size, int target){

int end = size - 1;
   int start = 0;

    while(start <= end)
    {
        int mid = (start + end) / 2;
        cout<<mid<<endl;
        if (array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] < target)
        {
            start = mid + 1;
        }
        if(array[mid] > target) {
            end = mid - 1;
        }
        
    }
    return -1;
}
    
    
int main(){
    
  int arr[]={0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
91, 92, 93, 94, 95, 96, 97, 98, 99, 100};


int find =25;
// cout<<"ENTER NO. TO BINARY SEARCH : ";
// cin>>find;
 int s = sizeof(arr)/sizeof(arr[0]);
   int result = binarySearch(arr,s,find);
   if (result > 0)
   {
     cout<<"TARGET IS FOUND AT the INDEX "<<arr[result]<<endl;
   }
     else{
        cout<<"THe TARGET IS NOT FOUND : "<<endl;
     }

    
    
    return 0;

    
    
}