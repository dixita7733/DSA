// **Q4: Counting Even and Odd Elements in a 2D Array**
// You are given a 3x3 matrix with random numbers. Write the steps to count how many even
// and odd numbers exist in the matrix

#include <iostream>
using namespace std;

int main(){
    int row, col;
    int even = 0;
    int odd = 0;
    
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
            cout << box[n][j];
        }
        cout << endl;
    }
    cout << endl;
    
      for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            if(box[n][j] % 2 == 0){
                even++;
                // cout << "even " << box[n][j] << endl;
                // cout << "even: " << even << endl;
            }
            else{
                odd++;
                //  cout << "odd " <<  box[n][j] << endl;

                // cout << "odd: " << odd << endl;
            }
        }
        cout << endl;
    }
    cout << "even: " << even << endl;
    cout << "odd: " << odd << endl;
}