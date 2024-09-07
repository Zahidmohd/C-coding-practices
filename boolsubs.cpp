#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t) {
    // Base cases
    if (t.length() == 0) {
        return true;
    }
    if (s.length() == 0) {
        return false;
    }

    // Check if the first characters match
    if (s[0] == t[0]) {
        // Recur for the remaining part of both strings
        return isSubsequence(s.substr(1), t.substr(1));
    } else {
        // Recur for the remaining part of s only
        return isSubsequence(s.substr(1), t);
    }
}

int main() {
    string s, t;
    // Taking input strings from the user
    cin >> s >> t;
    // Output the result of the isSubsequence function
    if (isSubsequence(s, t)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
