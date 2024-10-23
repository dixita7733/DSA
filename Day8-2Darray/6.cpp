// user num of row and col sum

#include <iostream>
using namespace std;

int main(){
    int row, col, colnum, rownum, colsum, rowsum;
    
    // int box[3][3] ={
    //     {3, 5, 7},
    //     {4, 1, 8},
    //     {6, 3, 2}
    // };
    
    cout << "Enter the size of array row: ";
    cin >> row;
    
    cout << "Enter the size of array col: ";
    cin >> col;
    
     int box[row][col];
     
     for(int n = 0; n < row; n++){
         for(int j = 0; j < col; j++){
             cout << "box[" << n << "][" << j << "]: ";
             cin >> box[n][j];
         }
         cout << endl;
     }
    
    for(int n = 0; n < 3; n++){
        for(int j = 0; j < 3; j++){
            cout << box[n][j] << " "; 
        }
        cout << endl;
    }
    
    cout << "Enter any col no.: ";
    cin >> colnum;
    
    cout << "Enter any row no.: ";
    cin >> rownum;
    
    
     for(int n = 0; n < 3; n++){
        for(int j = 0; j < 3; j++){
       if(colnum == colnum*1){
        if(j == colnum*1){
            cout << box[n][j] ;
            colsum += box[n][j];
            
        }
    }
           
        }
        cout << endl;
    }
    cout << "col sum is: " << colsum << endl;
    
    
        for(int n = 0; n < 3; n++){
        for(int j = 0; j < 3; j++){
        if(rownum == rownum*1){
        if(n == rownum*1){
            cout << box[n][j];
            rowsum += box[n][j];
        }
        }
           
        }
        cout << endl;
    }
        cout << "row sum is: " << rowsum << endl;

     

}