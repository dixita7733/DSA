// sum of diagnoal element.
#include <iostream>
using namespace std;

int main(){
    int row, col, sum;
    
    cout << "Enter the row size of array: ";
    cin >> row;
    
    cout << "Enter the column size of array: ";
    cin >> col;
    
    int box[row][col];
    
    for(int j = 0; j < row; j++){
        for(int n = 0; n < col; n++){
            cout << "box[" << j << "][" << n << "]: ";
            cin >> box[j][n];
            
            
        }
        cout << endl;
    }
    
     for(int j = 0; j < row; j++){
        for(int n = 0; n < col; n++){
           cout << box[j][n] ;
        }
        cout << endl;
    }
    
    //  cout << "The diagnoal element is: ";
    for(int i = 0; i < col; i++){
        sum += box[i][i];
        // cout << box[i][i] << endl;
        
    }
    cout << "diagnoal element sum is: "<< sum;

}