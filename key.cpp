#include <iostream>
#include <string>
using namespace std;

// Keymap to map digits to their corresponding letters on a phone keypad
const string keyMap[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// Function to generate all combinations recursively
void generateCombinations(int num, string current, string* output, int& count) {
    // Base case: when num is reduced to 0, store the current combination
    if (num == 0) {
        output[count] = current;
        count++;
        return;
    }

    // Get the last digit of the current number
    int digit = num % 10;
    num = num / 10;

    // Get the corresponding letters for the current digit
    string letters = keyMap[digit];

    // Iterate over the letters and call the recursive function for the remaining digits
    for (int i = 0; i < letters.size(); i++) {
        generateCombinations(num, letters[i] + current, output, count);
    }
}

// Wrapper function to handle the input and output
int keypadCombinations(int num, string* output) {
    // If the input number is 0 or 1, return 0 as there are no valid strings
    if (num == 0 || num == 1) {
        return 0;
    }

    int count = 0;
    generateCombinations(num, "", output, count);
    return count;
}

int main() {
    int num;
    cin >> num;

    // Allocate enough space for the output
    string* output = new string[10000];
    int count = keypadCombinations(num, output);

    // Print the generated combinations
    for (int i = 0; i < count; i++) {
        cout << output[i] << endl;
    }

    // Free allocated memory
    delete[] output;
    return 0;
}
