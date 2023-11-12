#include <iostream>

using namespace std;

void removeCharacterAtIndex(char* str, int index) {
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }

    if (index >= 0 && index < length) {
        
        for (int i = index; i < length; ++i) {
            str[i] = str[i + 1];
        }
        str[length - 1] = '\0'; 
    }
    else {
       
        cout << "Invalid index." << endl;
    }
}

int main() {
    const int maxSize = 100; 

    char input[maxSize];
    int index;

    cout << "Enter a string: ";
    cin.getline(input, maxSize);

    cout << "Enter the index of the character to remove: ";
    cin >> index;

    removeCharacterAtIndex(input, index);

    cout << "Result: " << input << endl;

    return 0;
}