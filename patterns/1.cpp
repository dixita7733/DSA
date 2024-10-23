// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <iostream>
using namespace std;

int main(){
   int num = 1;

    for(int row = 1; row <= 4; row++ ){
        for(int space = 0; space < row; space++){
            cout << "  ";
        }
        for(int col = row ; col <=  4; col++){
            cout << row << " ";
            num++;
        }
        cout << endl;
    }
}