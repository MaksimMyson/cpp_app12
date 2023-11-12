#include <iostream>

void removeCharacterAtIndex(char* str, size_t index) {
    if (str != nullptr) {
        size_t length = 0;
        while (str[length] != '\0') {
            ++length;
        }

        if (index < length) {
            for (size_t i = index; i < length - 1; ++i) {
                str[i] = str[i + 1];
            }
            str[length - 1] = '\0';
        }
    }
}

int main() {
    const int maxLength = 100; 
    char input[maxLength];

    std::cout << "Enter a string: ";
    std::cin.getline(input, maxLength);

    size_t indexToRemove;
    std::cout << "Enter the index to remove: ";
    std::cin >> indexToRemove;

    removeCharacterAtIndex(input, indexToRemove);

    std::cout << "Result: " << input << std::endl;

    return 0;
}