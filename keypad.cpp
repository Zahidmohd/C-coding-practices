#include <iostream>
using namespace std;

// Keypad mappings for each digit
const string keyMap[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// Recursive function to generate combinations
void comb(int num, string currentOutput, string* output, int& count) {
    // Base case: if num is 0, add the currentOutput to the output array and return
    if (num == 0) {
        output[count] = currentOutput;
        count++;
        return;
    }

    // Get the last digit of num
    int currentDigit = num % 10;
    // Remove the last digit from num
    num = num / 10;
    // Get the characters corresponding to the current digit
    string chars = keyMap[currentDigit];

    // Generate combinations by adding each character to the current output
    for (int i = 0; i < chars.size(); i++) {
        comb(num, chars[i] + currentOutput, output, count);
    }
}

// Function to generate keypad combinations
int keypadCombinations(int num, string* output) {
    if (num == 0 || num == 1) {
        return 0; // Return empty string for numbers 0 and 1
    }

    int count = 0;
    comb(num, "", output, count);
    return count;
}

int main() {
    int num;
    cin >> num;

    string* output = new string[1000]; // Adjust size as needed
    int count = keypadCombinations(num, output);

    for (int i = 0; i < count; i++) {
        cout << output[i] << endl;
    }

    delete[] output;
    return 0;
}
