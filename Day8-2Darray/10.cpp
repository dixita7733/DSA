//2d array to 1d array

#include <iostream>
using namespace std;

int main(){
    
    
    int box[2][2] = {
        {2, 5},
        {4, 8}
    };
    
   
   for(int n = 0; n < 2; n++){
       for(int j = 0; j < 2; j++){
           cout << box[n][j];
       }
       cout << endl;
   }
   
   cout << endl;
   
      for(int n = 0; n < 2; n++){
       for(int j = 0; j < 2; j++){
           cout << box[n][j];
       }
       
   }
}
