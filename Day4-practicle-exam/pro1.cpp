// Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
// formula: °F=(°C×59)+32

#include <iostream>
using namespace std;

int main() {
    float f, c;

    cout << "Enter the value of c: ";
    cin >> c;

    f = (c * 9 / 5) + 32;

    cout << "The Celsius to Fahrenheit value is: " << f << endl;

    return 0;
}
