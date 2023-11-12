#include <iostream>

void insertCharacterAtIndex(char* str, size_t index, char character) {
    if (str != nullptr) {
        size_t length = 0;
        while (str[length] != '\0') {
            ++length;
        }

        if (index <= length) {
            for (size_t i = length; i > index; --i) {
                str[i] = str[i - 1];
            }
            str[index] = character;
            str[length + 1] = '\0';
        }
    }
}

int main() {
    const int maxLength = 100; // Максимальна довжина рядка
    char input[maxLength];

    std::cout << "Enter a string: ";
    std::cin.getline(input, maxLength);

    size_t indexToInsert;
    char characterToInsert;

    std::cout << "Enter the index to insert: ";
    std::cin >> indexToInsert;

    std::cout << "Enter the character to insert: ";
    std::cin >> characterToInsert;

    insertCharacterAtIndex(input, indexToInsert, characterToInsert);

    std::cout << "Result: " << input << std::endl;

    return 0;
}