#include <iostream>
#include <string>
using namespace std;

// Function to find the first occurrence of a substring in a text
int findFirstOccurrence(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();

    if (m == 0) return 0; // empty pattern occurs at index 0

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m)
            return i; // pattern found at index i
    }
    return -1; // pattern not found
}

int main() {
    // New test cases
    string text1 = "artificial intelligence";
    string text2 = "machine learning";
    string text3 = "data science";

    cout << "Pattern at the beginning: "
         << findFirstOccurrence(text1, "artificial") << endl; 

    cout << "Pattern at the end: "
         << findFirstOccurrence(text2, "ning") << endl; 

    cout << "Pattern not present: "
         << findFirstOccurrence(text3, "python") << endl; 

    cout << "Empty pattern: "
         << findFirstOccurrence(text1, "") << endl; 

    return 0;
}
