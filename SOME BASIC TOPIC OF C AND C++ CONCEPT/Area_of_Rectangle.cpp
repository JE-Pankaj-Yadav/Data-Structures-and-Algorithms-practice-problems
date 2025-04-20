#include <iostream> // Include the input-output stream library

using namespace std; // Use standard namespace to avoid prefixing with std::

/*
 * Function to calculate the area of a rectangle.
 * Takes length and breadth as parameters.
 * Returns area (length * breadth).
 */
int area(int length, int breadth)
{
    return length * breadth; // Directly return the product
}

// Function to calculate the perimeter of a rectangle
// Formula: 2 * (length + breadth)
int perimeter(int length, int breadth)
{
    return 2 * (length + breadth); // Directly return the result (no need for extra variable)
}

int main()
{
    // Declare variables to store user input for length and breadth
    int length = 0;
    int breadth = 0;

    // Prompt the user to enter the length
    cout << "Enter the Length: ";
    cin >> length;

    // Prompt the user to enter the breadth
    cout << "Enter the Breadth: ";
    cin >> breadth;

    // Call the area function and store result in variable a
    int a = area(length, breadth);

    // Call the perimeter function and store result in variable p
    int p = perimeter(length, breadth);

    // Output the calculated area
    cout << "Area: " << a << endl;

    // Output the calculated perimeter
    cout << "Perimeter: " << p << endl;

    // Keep the output window open until user presses Enter
    cin.ignore(); // Ignore the newline character left in the buffer
    cin.get();    // Wait for user to press Enter

    return 0; // End of program
}
