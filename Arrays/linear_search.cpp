#include <iostream>
using namespace std;

int main() {
    int arr[6], n = 6;
    
    // Input the numbers into the array
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Input the key to search
    cout << "Enter the key to search: ";
    int key;
    cin >> key;
    
    // Searching for the key in the array
    for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            cout << "Key found at index " << i << endl; // Improved message
            return 0; // Exit if the key is found
        }
    }
    
    cout << "Key not found" << endl; // If key is not found
    return 0; // Successful execution
}
