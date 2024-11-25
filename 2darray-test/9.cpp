// **Q9: Frequency of Elements in a 2D Array**
// Write steps to count the frequency of each element in a 2D array of size 4x4. If an element
// appears multiple times, display how many times it appears.


#include <iostream>
using namespace std;

int main(){
    int row, col, sum;
    int num = 1;
    
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
            if(box[n][j] == n * 1 )
            cout << box[n][j] << " ";
            cout << "num: " << num;
            num++;
        }
        cout << endl;
    }
    
  
    
    
}