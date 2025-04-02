/*
    This program is designed to add two numbers and display their sum.
    It defines a function `add()` that takes two integer parameters,
    computes their sum, and returns the result.
    The `main()` function initializes two integer values,
    calls the `add()` function, and prints the result.
*/

#include <iostream> // Include the necessary header file for input and output operations

using namespace std; // Use the standard namespace to simplify code

// Function to add two integers and return their sum
int add(int a, int b) {
    return a + b; // Directly return the sum without using an extra variable
}

int main() {
    int x = 10; // Declare and initialize first number
    int y = 15; // Declare and initialize second number
    
    int z = add(x, y); // Call the add function and store the result in 'z'
    
    // Print the sum of the two numbers
    cout << "The sum of two numbers: " << z << endl;
    
    return 0; // Indicate successful program termination
}
