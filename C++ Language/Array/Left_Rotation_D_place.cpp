//  Reft Rotation of the Array By D Places.

#include<iostream>

using namespace std;

int main(){
    // Define an array of 10 elements
    int arr[10] = {23, 45, 67, 89, 10, 12, 34, 56, 78, 90};
    int len = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array
    int d = 4; // Number of positions to rotate

    // Temporary array to store first 'd' elements
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i]; // Store first 'd' elements in temp array
    }

    // Shift elements of the array to the left by 'd' positions
    for (int i = 0; i < len - d; i++) {
        arr[i] = arr[i + d];
    }

    // Copy back the elements from the temporary array to the end of the original array
    for (int i = 0; i < d; i++) {
        arr[len - d + i] = temp[i];
    }

    // Print the rotated array
    cout << "Array after left rotation by " << d << " places: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
