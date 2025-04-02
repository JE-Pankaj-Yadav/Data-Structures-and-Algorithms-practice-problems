#include <iostream>
using namespace std;

/* 
   This program show two different methods to swap two numbers efficiently:
   1. Call by Reference (using `&` operator): This directly modifies the original variables.
   2. Call by Address (using Pointers): This swaps values using memory addresses.
   
   The program is written in a simple and efficient manner to minimize execution time and space usage.
*/

// Case 1: Swap the numbers using Call by Reference
void swap(int &x, int &y) {
    int temp = x; // Store the value of x in a temporary variable
    x = y;        // Assign y's value to x
    y = temp;     // Assign the stored value to y
}

// Case 2: Swap the numbers using Call by Address (Pointers)
void swap_add(int *x, int *y) {
    int temp = *x; // Store the value at the address pointed by x
    *x = *y;       // Assign the value at y's address to x
    *y = temp;     // Assign the stored value to y
}

int main() {
    // First Case: Call by Reference
    int a = 10, b = 15; // Declare and initialize two integers
    cout << "Before swapping (Call by Reference): " << a << " " << b << endl;
    swap(a, b); // Swap values using call by reference
    cout << "After swapping (Call by Reference): " << a << " " << b << endl;

    // Second Case: Call by Address (Pointers)
    int c = 10, d = 23; // Declare and initialize another set of integers
    cout << "\nBefore swapping (Call by Address): " << c << " " << d << endl;
    swap_add(&c, &d); // Swap values using call by address (pointers)
    cout << "After swapping (Call by Address): " << c << " " << d << endl;

    return 0; // Indicate successful execution
}
