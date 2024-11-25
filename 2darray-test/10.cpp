// **Q10: Matrix Border Product**
// A user inputs a 4x4 matrix. Write steps to calculate the product of all the elements in the
// border of the matrix (first row, last row, first column, last column). Display the result.


#include <iostream>
using namespace std;

int main(){
    int row, col;
    long long multy = 1;
    
    cout << "Enter the size of row: ";
    cin >> row;
    
    cout << "Enter the size of col: ";
    cin >> col;
    
    int box[row][col];
    for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            cout << "box[" << n << "][" << j << "]: ";
            cin >> box[n][j];
        }
    cout << endl;
    }
    
        for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            cout << box[n][j] << " ";
        }
        cout << endl;
    }
    cout << "Border product: ";
    for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            if(n == 0  ||j == col - 1 || j == 0 || n == row - 1 ){
                    cout << box[n][j] << " * ";
                multy *= box[n][j];
            }
            
        }
    }
    
    cout << endl;
    cout << " = " << multy;
}