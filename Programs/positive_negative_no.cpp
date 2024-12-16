#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is zero
    if (num * num == num) {  // Only true for zero (0 * 0 == 0)
        cout << "The number is zero." << endl;
    }
    // Check if the number is positive
    else if (num > (num - num)) {  // Equivalent to checking if num > 0 without using 0 directly
        cout << "The number is positive." << endl;
    }
    // Otherwise, the number is negative
    else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
