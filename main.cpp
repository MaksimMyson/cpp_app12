#include <iostream>

int countOccurrences(const char* str, char target) {
    int count = 0;
    if (str != nullptr) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == target) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    const int maxLength = 100;
    char input[maxLength];
    char target;

    std::cout << "Enter a string: ";
    std::cin.getline(input, maxLength);

    std::cout << "Enter the target character to count: ";
    std::cin >> target;

    int occurrences = countOccurrences(input, target);

    std::cout << "The character '" << target << "' occurs " << occurrences << " times in the string." << std::endl;

    return 0;
}