// For N=5, what is the diamond pattern output?
// Input: Enter number of rows: 5
// Output:
//    *
//   ***
//  *****
// *******

#include <iostream>
using namespace std;

int main() {
    int userno;

    cout << "Enter number of rows: ";
    cin >> userno;

    for (int row = 0; row < userno; row++) {
        // Print spaces
        for (int space = 0; space < userno - row - 1; space++) {
            cout << " ";
        }

        // Print stars
        for (int col = 0; col < 2 * row + 1; col++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
