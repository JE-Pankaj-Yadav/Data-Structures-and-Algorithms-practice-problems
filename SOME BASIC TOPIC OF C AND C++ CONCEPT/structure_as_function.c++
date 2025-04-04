/*
    This program show the use of structures in C++ to represent a rectangle.
    It initializes a rectangle, calculates its area, and changes its length using functions.
    The goal is to understand how structures, pointers, and functions interact in C++.
*/

#include <iostream>  // Include the input-output stream library

using namespace std; // Use the standard namespace

// Define a structure named "Rectangle" with two integer attributes: length and breadth.
struct Rectangle
{
    int length;
    int breadth;
};

// Function to initialize a rectangle with given length and breadth
void initialize(Rectangle *r, int l, int b)
{
    r->length = l;   // Assigning length using pointer dereference
    r->breadth = b;  // Assigning breadth using pointer dereference
}

// Function to calculate and return the area of a rectangle
int area(Rectangle r)
{
    return r.breadth * r.length;  // Multiply length and breadth to find area
}

// Function to change the length of a rectangle
void changelength(Rectangle *r, int l)
{
    r->length = l;  // Modify the length using pointer
}

int main()
{
    Rectangle r;  // Declare a rectangle object

    // Initialize the rectangle with length = 20 and breadth = 10
    initialize(&r, 20, 10);

    // Print the area of the rectangle
    cout << "Area: " << area(r) << endl;

    // Change the length of the rectangle to 25
    changelength(&r, 25);

    // Print the updated area after changing the length
    cout << "Updated Area: " << area(r) << endl;

    return 0;  // Return 0 to indicate successful execution
}
