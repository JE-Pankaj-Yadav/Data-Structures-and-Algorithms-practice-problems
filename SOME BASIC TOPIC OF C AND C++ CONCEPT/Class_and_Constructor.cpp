// This program defines a Rectangle class in C++ that helps store the dimensions of a rectangle (length and breadth), calculate its area, and update its length later. The program then creates a Rectangle object, initializes it, displays its area, changes its length, and displays the updated area.

#include <iostream>  // Includes input-output stream for cout
using namespace std; // So we can use standard names without std:: prefix

// Class representing a Rectangle
class Rectangle
{
private:
    int length;  // Variable to store length of the rectangle
    int breadth; // Variable to store breadth of the rectangle

public:
    // Method to initialize length and breadth
    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // Method to calculate and return area
    int area()
    {
        return length * breadth;
    }

    // Method to change the length
    void changelength(int l)
    {
        length = l;
    }
};

// Main function to run the program
int main()
{
    Rectangle r; // Creating a Rectangle object named 'r'

    r.initialize(20, 10); // Initializing the rectangle with length 20 and breadth 10

    cout << "Area: " << r.area() << endl; // Printing the area of the rectangle

    r.changelength(25); // Changing the length of the rectangle to 25

    cout << "Updated Area: " << r.area() << endl; // Printing the updated area

    return 0; // Indicating successful program execution
}
