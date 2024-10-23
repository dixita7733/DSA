// swap row to col and col to row

#include <iostream>
using namespace std;

int main(){
    int row, col, colnum, rownum, colsum, rowsum;
    
    int box[3][3] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    
    for(int n = 0; n < 3; n++){
        for(int j = 0; j < 3; j++){
            cout << box[n][j] << " "; 
        }
        cout << endl;
    }
    
   cout << endl;
    
    for(int j = 0; j < 3; j++){
        for(int n = 2; n >= 0; n--){
            cout << box[n][j] << " ";
        }
        cout << endl;
    }
     

}