// What is the custom pattern output for N=4?
// Input: Enter number of rows: 4
// Output:
// 1
// 12
// 123
// 1234

#include <iostream>
using namespace std;

int main(){
    int userno;

    cout << "Enter number of rows: ";
    cin >> userno;

    for (int row = 1; row <= userno; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col ; 
        }

        cout << endl;
        
    }
    
}
