// 1 10 11 20 21
// 2 9  12 19 22
// 3 8  13 18 23
// 4 7  14 17 24
// 5 6  15 16 25

#include <iostream>
using namespace std;


int main(){
    int num1 = 1; 
    int num2 = 10;
    int num3 = 11;
    int num4 = 20;
    int num5 = 21;
 


 for(int row = 1; row <= 5; row++){
     for(int col = 1; col <= 1; col++){
         cout << endl;
         cout << num1 << "  ";
         num1++;
         
     }
    
     for(int col = 1; col <= 1; col++){
       
         cout << num2 << "  ";
         num2--;
          
     }
     for(int col = 1; col <= 1; col++){
       
         cout << num3 << "  " ;
         num3++;
          
     }
      for(int col = 1; col <= 1; col++){
       
         cout << num4 << "  ";
         num4--;
          
     }
       for(int col = 1; col <= 1; col++){
       
         cout << num5 << "  ";
         num5++;
          
     }
     
     
 }
}