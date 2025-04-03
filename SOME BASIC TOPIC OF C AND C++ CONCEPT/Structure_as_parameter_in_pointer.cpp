// This program show dynamic memory allocation in C++ using the new operator.

#include <iostream> // Including the iostream library for input and output operations

using namespace std; // Using standard namespace to avoid writing std:: repeatedly

// Defining a structure 'Rectangle' to store the properties of a rectangle
struct Rectangle {
    int length;
    int breadth;
};

// Function to allocate memory dynamically and return a pointer to the allocated structure
Rectangle *fun() { 
    Rectangle *p = new Rectangle; // Allocating memory dynamically using 'new'

    p->length = 15;  // Assigning value to length
    p->breadth = 7;  // Assigning value to breadth

    return p; // Returning the pointer to the dynamically allocated structure
}

int main() {
    Rectangle *ptr = fun(); // Calling fun() and storing the returned pointer

    // Accessing and printing the values of the dynamically allocated structure
    cout << "Length: " << ptr->length << endl;
    cout << "Breadth: " << ptr->breadth << endl;

    delete ptr; // Freeing the allocated memory to prevent memory leaks

    return 0; // Indicating successful program execution
}
