#include <iostream>  // Header file for input-output operations
#include <string>    // Header file to use the string data type

using namespace std; // Allows us to use standard library functions without "std::" prefix

// Defining a structure named 'Person' to store details of a person
struct Person {
    string name; // Member variable to store the person's name
    int age;     // Member variable to store the person's age
};

int main() {
    // Declaring an array of structures (persons) to store multiple persons' data
    Person persons[3] = {
        {"PANKAJ YADAV", 24}, // First person details (Name, Age)
        {"AMAN", 22},         // Second person details (Name, Age)
        {"YESVANT", 20}       // Third person details (Name, Age)
    };

    // Loop through the array and print details of each person
    for (int i = 0; i < 3; i++) {
        cout << persons[i].name << " " << persons[i].age << endl;
        // Output the name and age of each person
    }

    return 0; // Return 0 to indicate successful execution
}
