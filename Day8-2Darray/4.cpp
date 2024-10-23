// sum of anty-diagnoal

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
    
     cout << "The antydiagnoal element is: " << endl;
    
     for(int i = 0; i < row; i++) {
        sum += box[i][row - i - 1];
        
        cout << box[i][row - i - 1] << " ";
    }
    cout << "anty-diagnoal element sum is: "<< sum;

}



// -------------------------------------------- using flip logic ------------------------------------------ 

// #include <iostream>
// using namespace std;

// int main(){
//     int row, col, sum;
    
//     cout << "Enter the row size:";
//     cin >> row;
    
//     cout << "Enter the col size:";
//     cin >> col;
    
//     int box[row][col];
    
    
    
//        for(int n = 0 ; n < row; n++){
//         for(int j = col - 1; j >= 0; j--){
//             cout << "box[" << n << "][" << j << "]: ";
//             cin >> box[n][j];
//             cout << box[n][j];
//         }
//         cout << endl;
//     }
    
//            for(int n = 0; n < row; n++){
//         for(int j = 0; j < col; j++){
//             cout << box[n][j];
//         }
//         cout << endl;
//     }
    
//     cout << "The anty diagnoal element is: ";
//     for(int i = 0; i < col; i++){
//         sum += box[i][i];
//         cout << box[i][i] << endl;
        
//     }
    
//        cout << "anty diagnoal element sum is: "<< sum;

    
// }