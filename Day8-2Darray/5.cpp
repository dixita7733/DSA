#include <iostream>
using namespace std;

int main(){
    int row, col, sum;
    
    cout << "Enter the size of row: ";
    cin >> row;
    
    cout << "Enter the size of column: ";
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
            cout << box[n][j];
        }
        cout << endl;
    }
    
     for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            if(n == 0 || n == row - 1 || j == 0 || j == col - 1){
            cout << box[n][j];
            sum += box[n][j];
        }   
     
    }
    
    
}
    cout << "\nSum of boundary elements: " << sum << endl;

}