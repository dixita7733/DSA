// Write a Program to find the minimum number from the given 3 numbers using the
// ternary operator.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3
// Enter a value of the third number: 12
// Output:
// The minimum value is: 3

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the number of a: " << endl;
    cin >> a;

    cout << "Enter the number of b: " << endl;
    cin >> b;

    cout << "Enter the number of c: " << endl;
    cin >> c;

    // Using the ternary operator to find the minimum
    (a < b) ? (a < c) ? cout << "a is min" : cout << "c is min" 
            : (b < c) ? cout << "b is min" : cout << "c is min";

    
}
