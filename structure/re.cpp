#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string src = "Hello";
    string dest(5, ' '); // Create a string of 5 spaces

    copy(src.begin(), src.end(), dest.begin());

    cout << "Copied string: " << dest << endl;
    return 0;
}
