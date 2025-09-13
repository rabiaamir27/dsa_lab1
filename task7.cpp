#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of a given element in an array
vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    vector<int> indices = findAllIndices(arr, key);

    if (!indices.empty()) {
        cout << "Indices of " << key << " in the array: ";
        for (int index : indices) cout << index << " ";
    } else {
        cout << "Key " << key << " not found in the array.";
    }
    cout << endl;

    return 0;
}

