#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter the value of angle 1 for a: ";
    cin >> a;

    cout << "Enter the value of angle 2 for b: ";
    cin >> b;

    c = 180 - (a + b);

    cout << "The value of angle 3 (c) is: " << c << endl;

    
}
