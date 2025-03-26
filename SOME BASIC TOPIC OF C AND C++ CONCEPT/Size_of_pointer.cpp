// This program show the size of different pointer types in C++.

#include <iostream>  // Required for input-output operations

using namespace std; // Use the standard namespace

// Define a structure named Rectangle
struct Rectangle
{
    int length;
    int breadth;
};

int main() {
    int *p1;          // Pointer to an integer
    float *p2;        // Pointer to a float
    char *p3;         // Pointer to a character
    double *p4;       // Pointer to a double
    struct Rectangle *p5; // Pointer to a structure

    // Printing sizes of different pointer types
    cout << "Size of int pointer: " << sizeof(p1) << " bytes" << endl;
    cout << "Size of float pointer: " << sizeof(p2) << " bytes" << endl;
    cout << "Size of char pointer: " << sizeof(p3) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(p4) << " bytes" << endl;
    cout << "Size of struct pointer: " << sizeof(p5) << " bytes" << endl;

    return 0;
}
