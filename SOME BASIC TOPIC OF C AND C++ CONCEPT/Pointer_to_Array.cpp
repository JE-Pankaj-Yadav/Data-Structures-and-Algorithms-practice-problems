// This program show pointer arithmetic with arrays in C++.

#include <iostream>  // Include the input-output stream library

using namespace std; // Use the standard namespace

int main() {
    int arr[5] = {2, 4, 6, 8, 10}; // Declare and initialize an array
    int len = sizeof(arr) / sizeof(arr[0]); // Calculate array length

    int *p = arr; // Corrected: Set pointer to the first element of the array

    // Loop to print the address of each element
    for (int i = 0; i < len; i++) {
        cout << "The Address of " << arr[i] << " is " << (p + i) << endl;
    }

    return 0;
}
