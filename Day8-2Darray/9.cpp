// find max num and get index num 

// find max num 
#include <iostream>
using namespace std;

int main(){
    int row, col;
    
    cout << "Enter the row of size: ";
    cin >> row;
    
    cout << "Enter the col of size: ";
    cin >> col;
    
    int box[row][col];
    int max = box[0][0];
    
    for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            cout << "box[" << n << "][" << j << "]: ";
            cin >> box[n][j];
        }
    }
    
      for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            if(max < box[n][j]){
                max = box[n][j];
            }
        }
    }
    cout << "max is: " <<max << endl;
        for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){

            if(max == box[n][j]){
                max = box[n][j];
                cout << "pos is: " << box[n][j] << "[" << n << "][" << j << "]";
                break;
            }
            
        }
    }
    
}