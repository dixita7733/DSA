// sum of two array
#include <iostream>
using namespace std;

int main(){
   int a[5] = {4, 7, 9, 2, 1};
   int b[5] = {6, 4, 2, 8, 5};
   int c[5];
   
   for(int i = 0; i < 5; i++){
    cout << a[i] << " ";
    cout << b[i] << endl;
    cout << "sum of two array: " << a[i] + b[i] << endl;
   }
}

// #include <iostream>

// using namespace std;

// int main(){
//       int size;
//       int sum;

//     cout << "Enter the size of array: ";
//     cin >> size;
    
//     int a[size];
  
    
//     for(int i = 0; i < size; i++){
        
//         cin >> a[i];
       
       
        
//     }
//     for(int i = 0; i < size; i++){
//         sum = sum + a[i];
       
//     }
//      cout << "sum is: " << sum;
     
// }