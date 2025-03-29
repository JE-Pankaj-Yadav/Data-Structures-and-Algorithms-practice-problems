/*
 * This program finds and prints all leader elements in an array.
 * A leader is an element that is greater than all the elements to its right.
 * The program efficiently finds leaders using a single right-to-left traversal.
 * It minimizes time complexity to O(N) and space complexity to O(1) 
 * (by printing leaders directly instead of storing them in an extra array).
 */

 #include <iostream>

 using namespace std;
 
 int main() {
     // Given array
     int A[] = {12, 34, 45, 67, 89, 35, 67, 9, 89, 19};
     int len = sizeof(A) / sizeof(A[0]); // Calculate the length of the array
 
     // The last element is always a leader
     int max_right = A[len - 1];  
     cout << "Leader elements in the array:" << endl;
     cout << max_right << endl; // Print the last element as the first leader
 
     // Traverse the array from right to left, starting from the second-last element
     for (int i = len - 2; i >= 0; i--) {
         if (A[i] > max_right) {  
             max_right = A[i];  // Update the new maximum (leader)
             cout << max_right << endl; // Print leader directly (no extra space used)
         }
     }
 
     return 0; // Indicate successful execution
 }
 