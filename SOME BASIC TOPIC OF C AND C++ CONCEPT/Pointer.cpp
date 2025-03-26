// This program demonstrates the use of pointers in C++.

#include <iostream>  // Include the input-output stream library

using namespace std; // Use the standard namespace

int main() {
    int a = 4;  // Declare an integer variable and initialize it
    int *p;     // Declare a pointer to an integer
    p = &a;     // Assign the address of 'a' to the pointer 'p'

    cout << "Value of a: " << a << endl;           // Print the value of 'a'
    cout << "Address of a: " << &a << endl;        // Print the memory address of 'a'
    cout << "Value stored in pointer p: " << p << endl; // Print the address stored in 'p'
    cout << "Value pointed to by p: " << *p << endl; // Dereference pointer to get value of 'a'

    return 0;
}
