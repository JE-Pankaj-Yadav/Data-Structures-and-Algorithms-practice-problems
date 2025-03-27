// This program show the use of reference variables in C++
#include <iostream> 

using namespace std;

int main() {
    int a = 10;  // Declare an integer variable 'a' and initialize it with 10
    int &r = a;  // Declare reference variable 'r' that refers to 'a'

    int b = 25;  // Declare an integer variable 'b' and initialize it with 25
    int &s = b;  // Declare reference variable 's' that refers to 'b'

    // Printing values of 'a' and its reference 'r'
    cout << a << endl << r << endl; // Output: 10 10

    // Printing values of 'b' and its reference 's'
    cout << b << endl << s << endl; // Output: 25 25

    return 0; // Indicate successful execution of the program
}
