#include <iostream>
using namespace std;
 
int main(){
    int no;
    bool Prime = true;
 
    cout << "Enter a Number: "<<endl;
    cin >> no;
 
    if(no <= 1){
        Prime = false;
    }else{
        for(int i = 2; i * i <= no; i++){
            if(no % i == 0){
                Prime = false;
                break;
            }
        }
    }
 
    if(Prime){
        cout << no << " is a prime number." << endl;
    }else{
        cout << no << " is not a prime number." << endl;
    }
 
    return 0;
}

