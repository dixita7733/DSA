// Maximum Element in Each Row**
// Write steps to input a 2D array of size 5x5 representing student grades. After inputting the
// values, find and display the maximum grade in each row.

#include <iostream>
using namespace std;

int main(){
    int row, col;
    
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
    
     
    
    
     for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            // cout << box[n][j];
                
    
         for(int n = 0; n < row; n++){
       
             int max = box[0][j];

        
          if(max < box[n][j]){
             
              cout << "Row " << n   << " max: " << j << box[n][j] ;
               max = box[n][j];
          }
          
        
        
        
    }
        }
        
    }
    

    
    
}