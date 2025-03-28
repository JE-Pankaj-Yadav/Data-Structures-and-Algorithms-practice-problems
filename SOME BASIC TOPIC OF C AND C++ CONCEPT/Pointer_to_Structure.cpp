// This program show different ways to create and access structure variables in C++

#include <iostream> // For input-output operations
#include <cstdlib>  // For dynamic memory allocation using malloc()

using namespace std;

// Defining a structure 'Rectangle' with two integer members
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Case 1: Direct structure variable initialization and access
    Rectangle r = {10, 5};
    cout << r.length << endl;  // Output: 10
    cout << r.breadth << endl; // Output: 5

    // Case 2: Accessing structure members using a pointer to a structure variable
    cout << endl;
    Rectangle *p = &r;          // Pointer 'p' stores the address of 'r'
    cout << p->length << endl;  // Output: 10
    cout << p->breadth << endl; // Output: 5

    // Case 3: Dynamically allocating memory for a structure using malloc()
    cout << endl;
    Rectangle *q;                               // Declaring a pointer to a structure
    q = (Rectangle *)malloc(sizeof(Rectangle)); // Allocating memory dynamically

    q->length = 15; // Assigning values to dynamically allocated structure
    q->breadth = 7;
    cout << q->length << endl;  // Output: 15
    cout << q->breadth << endl; // Output: 7

    free(q); // Free the dynamically allocated memory

    return 0; // Indicate successful execution of the program
}
