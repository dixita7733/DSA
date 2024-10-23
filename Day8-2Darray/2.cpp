// sum of two arrays

#include <iostream>
using namespace std;

int main(){
    int row, col;

    cout << "Enter the row size of array: ";
    cin >> row;

    cout << "Enter the col size of array: ";
    cin >> col;

    int box1[row][col];
    int box2[row][col];
    int box3[row][col];

    for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            cout << "box1[" << n << "][" << j << "]: ";
            cin >> box1[n][j];
        }
        cout << endl;
    }

    for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            cout << "box2[" << n << "][" << j << "]: ";
            cin >> box2[n][j];
        }
        cout << endl;
    }

    for(int n = 0; n < row; n++){
        for(int j = 0; j < col; j++){
            box3[row][col] = box1[n][j] + box2[n][j];
            cout << "box1[" << n << "][" << j << "] and box2[" << n << "][" << j << "] is: " << box3[row][col] << endl;

        }
        cout << endl;
    }
}