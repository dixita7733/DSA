#include <iostream>
using namespace std;

int main(){
    int row, col, num;
    
    cout << "Enter the size of row: ";
    cin >> row;
    cout << "Enter the size of col: ";
    cin >> col;
    
    int box[row][col];
    
    for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            cout << "box[" << n << "][" << j << "]: " ;
            cin >> box[n][j];
        }
    }
    
    cout << "Enter the any num: ";
    cin >> num;
    
    for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            if(num == box[n][j]){
            cout << box[n][j] << endl;
            cout << "pos is: ["<< n  << "][" << j << "]";}
        }
    }
   
}