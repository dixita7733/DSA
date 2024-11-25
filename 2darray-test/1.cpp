// 1. **Q1: Diagonal Sum of a Matrix**
// You are given a 4x4 matrix representing scores in a tournament. The user inputs the values of
// the matrix. Write the steps to calculate the sum of the elements on the primary diagonal (top-left
// to bottom-right) and the secondary diagonal (top-right to bottom-left).

#include <iostream>
using namespace std;

int main(){
     int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
  
// 10 20 30 40
// 50 60 70 80
// 90 100 110 120
// 130 140 150 160
    
    int box[4][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120},
        {130, 140, 150, 160}
    };
    
    // for(int n = 0; n < 4 ;n++){
    //     for(int j = 0; j < 4; j++){
    //         cout << box[n][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    
    for(int n = 0; n < 4 ;n++){
        for(int j = 4-1; j >= 0; j--){
            cout << box[n][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
   for (int i = 0; i < 4; i++) {
        primaryDiagonalSum += box[i][i];
    }

   
    for (int i = 0; i < 4; i++) {
        secondaryDiagonalSum += box[i][3 - i];
    }

    cout << "Primary diagonal sum is: " << primaryDiagonalSum << endl;
    cout << "Secondary diagonal sum is: " << secondaryDiagonalSum << endl;

    return 0;
}
