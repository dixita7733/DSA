// What pattern is printed with N=5?
// Input: Enter number of rows: 5
// Output:
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main(){
    int userno; 

    cout << "Enter the number of rows: ";
    cin >> userno;

    for (int row = 1; row <= userno; row++)
    {
        for (int col = row; col >= 1; col--)
        {
             cout << " *";
        }
        cout << endl;
        
    }
    
}
