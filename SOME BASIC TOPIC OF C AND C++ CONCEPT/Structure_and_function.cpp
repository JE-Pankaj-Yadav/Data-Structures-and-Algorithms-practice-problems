/*
 * Purpose of the Program:
 * This program show how to use a structure in C++ to represent a rectangle.
 * It takes user input for the rectangle's length and breadth, calculates its area and perimeter,
 * and then displays the results. It uses functions for initialization, area, and perimeter calculation.
 */

 #include <iostream> // Include the input-output stream library for input and output operations

 using namespace std; // Use the standard namespace to avoid writing std:: before every standard function
 
 /*
  * Define a structure named Rectangle to group related data.
  * It contains two integers: length and breadth.
  */
 struct Rectangle {
     int length;   // Length of the rectangle
     int breadth;  // Breadth of the rectangle
 };
 
 /*
  * Function to initialize the members of a Rectangle structure.
  * Parameters:
  *   - r: pointer to a Rectangle structure
  *   - l: length to assign
  *   - b: breadth to assign
  */
 void initialise(Rectangle* r, int l, int b) {
     r->length = l;    // Set the length using pointer access
     r->breadth = b;   // Set the breadth using pointer access
 }
 
 /*
  * Function to calculate the area of a rectangle.
  * Takes a constant reference to avoid copying.
  * Returns the product of length and breadth.
  */
 int area(const Rectangle& r) {
     return r.length * r.breadth; // Area = length * breadth
 }
 
 /*
  * Function to calculate the perimeter of a rectangle.
  * Takes a constant reference to avoid copying.
  * Returns 2 times the sum of length and breadth.
  */
 int perimeter(const Rectangle& r) {
     return 2 * (r.length + r.breadth); // Perimeter = 2 * (length + breadth)
 }
 
 int main() {
     int l, b; // Declare variables to store user input for length and breadth
 
     // Prompt the user to enter the length of the rectangle
     cout << "Enter the Length: ";
     cin >> l; // Read the length input from the user
 
     // Prompt the user to enter the breadth of the rectangle
     cout << "Enter the Breadth: ";
     cin >> b; // Read the breadth input from the user
 
     Rectangle r; // Declare a Rectangle object named 'r'
 
     initialise(&r, l, b); // Initialize the rectangle with user input values
 
     int a = area(r);       // Calculate the area of the rectangle and store in 'a'
     int p = perimeter(r);  // Calculate the perimeter and store in 'p'
 
     // Display the calculated area
     cout << "Area: " << a << endl;
 
     // Display the calculated perimeter
     cout << "Perimeter: " << p << endl;
 
     // Optional: Pause the console to view output before exiting (useful in some IDEs)
     cin.ignore(); // Ignore the newline character left in the input buffer
     cin.get();    // Wait for the user to press Enter
 
     return 0; // End of program
 }
 