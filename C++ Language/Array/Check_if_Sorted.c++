// Check if Sorted

#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Example sorted array
    int len = sizeof(arr) / sizeof(arr[0]);

    // Iterate only till the second-last element to avoid out-of-bounds access
    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        { // If next element is smaller, array is not sorted
            cout << "Array is not Sorted";
            return 0; // Exit as soon as an unsorted pair is found
        }
    }

    cout << "Array is Sorted!";
    return 0;
}
