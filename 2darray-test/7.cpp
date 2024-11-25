// **Q7: Counting Zeros in a 2D Array**
// Write a process where the user inputs a 4x4 matrix. Count how many zero elements exist in
// the matrix and display the result.


#include <iostream>
using namespace std;

int main(){
    int row, col;
    int zero = 0;
    
    cout << "Enter the size of row: ";
    cin >> row;
    
    cout << "Enter the size of row: ";
    cin >> col;
    
    int box[row][col];

    
    // int box[4][4] = {
    //     {1, 0, 3, 4},
    //     {0, 5, 0, 7},
    //     {8, 0, 0, 2},
    //     {3, 9, 1, 0}
    // };
    
    for(int n = 0; n < row ;n++){
        for(int j = 0; j < col; j++){
            cout << "box[" << n << "][" << j << "]: ";
            cin >> box[n][j];
            
        }
        cout << endl;
    }
    
    for(int n = 0; n < row ;n++){
        for(int j = 0; j < col; j++){
            cout << box[n][j] << " ";
            
        }
        cout << endl;
    }
    
    for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            if(box[n][j] == 0){
               
                zero++;
            }
            
        }
        
        cout << endl;
    }
    cout << "Number of zeros: " << zero;
    
    

}
