// user num of row and col sum

#include <iostream>
using namespace std;

int main(){
    int row, col, colnum, rownum, colsum, rowsum;
    
    int box[2][3] ={
        {1, 2, 3},
        {6, 4, 8}
        
    };
    
    
    
    for(int n = 0; n < 2; n++){
        for(int j = 0; j < 3; j++){
            cout << box[n][j] << " "; 
        }
        cout << endl;
    }
    
   cout << endl;
    
    for(int j = 0; j < 3; j++){
        for(int n = 0; n < 2; n++){
            cout << box[n][j] << " ";
        }
        cout << endl;
    }
     

}