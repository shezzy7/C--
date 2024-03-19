#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& str) {
    int vowelCount = 0;

    for (char ch : str) {
        // Convert character to lowercase for case insensitivity
        char lowercaseCh = tolower(ch);

        // Check if the character is a vowel (a, e, i, o, u)
        if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = countVowels(input);
    cout << "Number of vowels in the string: " << vowels << endl;

    return 0;
}

