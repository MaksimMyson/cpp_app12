#include <iostream>

using namespace std;

bool isAlpha(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int countWords(const char* sentence) {
    int words = 0;
    bool inWord = false;

    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (isAlpha(sentence[i])) {
            if (!inWord) {
                words++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
    }

    return words;
}

int main() {
    char sentence[1000];

    cout << "Enter a sentence: ";
    cin.getline(sentence, sizeof(sentence));

    int numberOfWords = countWords(sentence);

    cout << "Number of words: " << numberOfWords << endl;

    return 0;
}