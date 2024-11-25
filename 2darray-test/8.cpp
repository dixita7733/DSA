// **Q8: Transpose of a Matrix**
// A user enters a 3x3 matrix. Write the steps to find the transpose of the matrix (switch rows and
// columns) and display the result.


#include <iostream>
using namespace std;

int main(){
    int row, col, sum;
    
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
    
    cout << endl;
    
      for(int j = 0; j < col; j++){
        for(int n = 0; n < row; n++){
            cout << box[n][j] << " ";
        }
        cout << endl;
    }
    
  
    
    
}