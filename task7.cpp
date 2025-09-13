#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of a key in an array
vector<int> findIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

// Utility function to print a vector
void printVector(const vector<int>& v) {
    if (v.empty()) {
        cout << "No indices found.";
    } else {
        for (int idx : v) {
            cout << idx << " ";
        }
    }
    cout << endl;
}

int main() {
    int n, key;

    // Take array size
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    // Take array input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Take key input
    cout << "Enter key to search: ";
    cin >> key;

    // Find and print indices
    cout << "Indices of " << key << ": ";
    printVector(findIndices(arr, key));

    return 0;
}
