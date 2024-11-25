#include <iostream>
using namespace std;

int main() {
    int row, col;
    
    cout << "Enter the size of row: ";
    cin >> row;
    
    cout << "Enter the size of col: ";
    cin >> col;
    
    int box1[row][col];
    int box2[row][col];
    int box3[row * 2][col];  

   
    cout << "Enter values for box1:\n";
    for (int n = 0; n < row; n++) {
        for (int j = 0; j < col; j++) {
            cout << "box1[" << n << "][" << j << "]: ";
            cin >> box1[n][j];
        }
    }
    
   
    cout << "\nEnter values for box2:\n";
    for (int n = 0; n < row; n++) {
        for (int j = 0; j < col; j++) {
            cout << "box2[" << n << "][" << j << "]: ";
            cin >> box2[n][j];
        }
    }
    
   
    for (int n = 0; n < row; n++) {
        for (int j = 0; j < col; j++) {
            box3[n][j] = box1[n][j];
        }
    }
    
  
    for (int n = 0; n < row; n++) {
        for (int j = 0; j < col; j++) {
            box3[n + row][j] = box2[n][j];
        }
    }
    
    
    cout << "\nMerged box3 array:\n";
    for (int n = 0; n < row * 2; n++) {
        for (int j = 0; j < col; j++) {
            cout << box3[n][j] << " ";
        }
        cout << endl;
    }
    
    
}
