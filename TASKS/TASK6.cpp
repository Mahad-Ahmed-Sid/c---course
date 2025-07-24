#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int num,original,remain;
    int result = 0;
    int n = 0;
 
    cout << "Enter a Number: "<<endl;
    cin >> num;
 
    original = num;
 
    int m = num;
    
    while(m != 0){
        m = m / 10;
        n++;
    }
 
    m = num;
    
    while(m != 0){
        remain = m % 10;
        result = result + pow(remain,n);
        m = m / 10;
    }
    
    if(result == original){
        cout << original << " is an Armstrong number." << endl;
    }else{
        cout << original << " is not an Armstrong number." << endl;
    }
 
    return 0;
}

