// This program show pass-by-value and pass-by-address concepts in C++ using a structure (Rectangle).

#include <iostream> // Including the iostream library for input and output operations

using namespace std; // Using the standard namespace to avoid prefixing std:: with cout and endl

// Defining a structure 'Rectangle' to represent a rectangle with length and breadth
struct Rectangle {
    int length;
    int breadth;
};

// Function to demonstrate pass-by-value (copy of structure is passed)
void fun(Rectangle r) { // 'r' is a copy of the original structure
    cout << "Inside fun() - Length: " << r.length << endl;
    cout << "Inside fun() - Breadth: " << r.breadth << endl;
}

// Function to demonstrate pass-by-address (pointer to structure is passed)
void fun_Pointer(Rectangle *p) { // 'p' is a pointer to the original structure
    p->length = 20; // Modifying the original structure's length
    cout << "Inside fun_Pointer() - Length: " << p->length << endl;
    cout << "Inside fun_Pointer() - Breadth: " << p->breadth << endl;
}

int main() {
    // Initializing a Rectangle structure with length=10 and breadth=15
    Rectangle r = {10, 15}; 
    
    // Calling fun() with pass-by-value (original structure remains unchanged)
    fun(r);

    // Calling fun_Pointer() with pass-by-address (original structure gets modified)
    fun_Pointer(&r);

    // Printing the values after function calls
    cout << "After function calls - Length: " << r.length << endl;
    cout << "After function calls - Breadth: " << r.breadth << endl;

    return 0; // Returning 0 to indicate successful execution
}
