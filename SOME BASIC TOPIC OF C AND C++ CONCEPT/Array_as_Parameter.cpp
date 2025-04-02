#include <iostream>
using namespace std;

/* 
   This program show different ways to pass and manipulate arrays in functions:
   1. Case 1: Passing an array to a function by reference.
   2. Case 2: Passing an array to a function using a pointer.
   3. Case 3: Dynamically allocating an array and returning it from a function.

   The program is structured in a simple way to optimize execution time and space.
*/

// Function prototype for Case 3 (declaring before main)
int* fun_po(int size);

// Case 1: Function that receives an array by reference
void fun(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " "; // Print array elements
    }
    cout << endl;
}

// Case 2: Function that receives an array as a pointer
void fun_p(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " "; // Print array elements
    }
    cout << endl;
}

// Case 3: Function that dynamically allocates an array and returns it
int* fun_po(int size)
{
    int *p = new int[size]; // Dynamically allocate memory for array

    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1; // Initialize array with values 1 to size
    }
    return p; // Return the pointer to the allocated memory
}

int main()
{
    // Case 1: Using an array as a reference
    int A[] = {2, 4, 6, 8, 9, 12, 34, 67}; // Declare and initialize an array
    int len = sizeof(A) / sizeof(A[0]); // Compute the array length

    cout << "Array elements using fun():\n";
    fun(A, len); // Call function using array reference

    cout << "Array elements using fun_p():\n";
    fun_p(A, len); // Call function using a pointer

    cout << "Array elements using range-based loop:\n";
    for (int x : A) // Enhanced for-loop to print array elements
        cout << x << " ";
    cout << endl;

    // Case 3: Executing dynamically allocated array function
    int *ptr, sz = 5;
    ptr = fun_po(sz); // Call function to get a dynamically allocated array

    cout << "Dynamically allocated array elements:\n";
    for (int i = 0; i < sz; i++)
    {
        cout << ptr[i] << " "; // Print dynamically allocated array elements
    }
    cout << endl;

    delete[] ptr; // Free dynamically allocated memory to avoid memory leaks

    return 0; // Indicating successful execution
}
