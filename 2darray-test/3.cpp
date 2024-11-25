// *Q3: Rotating a 2D Array 90 Degrees**
// A user inputs a 3x3 matrix. Write the steps to rotate the matrix 90 degrees clockwise and
// display the output.

#include <iostream>
using namespace std;

int main(){
    int row, col;
    
    cout << "Enter the size of row: ";
    cin >> row;
    
    cout << "Enter the size of col: ";
    cin >> col;
    
    int box[row][col];
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "box[" << i << "][" << j << "]: ";
            cin >> box[i][j];
        }
        cout << endl;
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << box[i][j];
        }
        cout << endl;
    }
    cout << endl;
    
    for(int j = 0; j < row; j++){
        for(int i = col -1; i >= 0; i--){
            cout << box[i][j];
        }
        cout << endl;
    }
}
