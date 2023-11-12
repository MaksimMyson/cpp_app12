#include <iostream>

void replaceDotsWithExclamation(char* str) {
    if (str != nullptr) {
        for (int i = 0; str[i] != '\0'; ++i) {
            if (str[i] == '.') {
                str[i] = '!';
            }
        }
    }
}

int main() {
    const int maxLength = 100; 
    char input[maxLength];

    std::cout << "Enter a string: ";
    std::cin.getline(input, maxLength);

    replaceDotsWithExclamation(input);

    std::cout << "Result: " << input << std::endl;

    return 0;
}