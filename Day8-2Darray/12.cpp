// set 0 
#include <iostream>
using namespace std;

int main() {
    int row, col, num;
   
    
    int box[3][3] = {
        {1, 2, 4},
        {3, 0, 4},
        {3, 4, 5}
    };
    
  
    for(int n = 0; n < 3; n++) {
        for(int j = 0; j < 3; j++) {
            cout << box[n][j] << " ";
        }
        cout << endl;
    }
    
   cout << endl;
    
       for(int n = 0; n < 3; n++){
                for(int j = 0; j < 3; j++){
                    if(n == 1 || j == 1 ){
                        box[n][j] = 0;
                        cout << box[n][j] << " " ;
                    }
                
                    else{
                        cout << box[n][j] << " ";
                    }
                }
                cout << endl;
            }
}