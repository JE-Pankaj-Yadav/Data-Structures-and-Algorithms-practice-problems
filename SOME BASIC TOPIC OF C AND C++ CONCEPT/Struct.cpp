// This program calculates the memory size occupied by a structure object.

#include <iostream>  // Include the input-output stream library

using namespace std; // Use the standard namespace

// Define a structure named Rectangle
struct Rectangle
{
    int length;  // Variable to store length
    int breadth; // Corrected variable name (previously "Breadth") to maintain consistency
};

int main()
{
    struct Rectangle r1 = {10, 15}; // Declare and initialize the Rectangle object
    cout << "Size of structure Rectangle: " << sizeof(r1) << " bytes"<<endl; // Display memory size
    return 0;
}
