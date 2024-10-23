// find average in 2d array 

#include <iostream>
using namespace std;

int main(){

    int row ;
    int sum;
    int total;
    int avg;

    cout << "Enter the row size of array: ";
    cin >> row;

    int col;

    cout << "Enter the column size of array: ";
    cin >> col;

   int box[row][col];

   for(int row = 0; row < row; row++){
     for(int col = 0; col < col; col++){
          cout << "box[" << row << "]" << "[" << col<< "]: " ; 
          cin >> box[row][col];
             sum += box[row][col];

     }
     cout << endl;
   }
   
   
   avg = row*col;
   total = sum / avg;
   
   cout << "total is: " << total;
   
   

}