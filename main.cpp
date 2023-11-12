#include <iostream>
#include <cctype>

using namespace std;

bool isPalindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
       
        while (!isalnum(str[left]) && left < right) {
            left++;
        }

        while (!isalnum(str[right]) && left < right) {
            right--;
        }

       
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    char str[1000];

    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));

    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}