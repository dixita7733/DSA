#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    z = x;
    x = y;
    y = z;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
