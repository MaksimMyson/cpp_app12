#include <iostream>

using namespace std;

int main() {
    const int maxSize = 100; 

    char inputString[maxSize];

    cout << "Enter a string: ";
    cin.getline(inputString, maxSize);

    
    for (int i = 0; inputString[i] != '\0'; ++i) {
        if (inputString[i] == ' ') {
            inputString[i] = '\t';
        }
    }

   
    cout << "Modified string: " << inputString << endl;

    return 0;
}