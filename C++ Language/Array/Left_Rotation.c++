// Left Rotation of the array by 1.

#include <iostream>

using namespace std;

int main() {
    int arr[10] = {2, 4, 7, 5, 8, 5, 23, 45, 89, 78};
    int len = sizeof(arr) / sizeof(arr[0]);

    // Store the first element before shifting
    int first = arr[0];

    // Shift elements to the left
    for (int i = 0; i < len - 1; i++) {  // Fix: Stop at len-1 to avoid out-of-bounds access
        arr[i] = arr[i + 1];
    }

    // Place the first element at the last position
    arr[len - 1] = first;  // Fix: Assign the first element to the last position

    // Print the rotated array
    cout << "Array after left rotation by 1: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
