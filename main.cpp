#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char str[100];
    int letters = 0, digits = 0, others = 0;

    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            letters++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else {
            others++;
        }
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Other characters: " << others << endl;

    return 0;
}