#include <iostream>
using namespace std;

int main() {
    string str;
    int vowelCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);  // Use getline to allow spaces

    // Loop through each character
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);  // Convert to lowercase for simplicity

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
