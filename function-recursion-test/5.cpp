//tsrn
//write a function that takes an array of integers and its size , then displays all even numbers in the array.

#include <iostream>
using namespace std;


void myfunc(int b){
    int arr[b] = {1, 2, 3, 4, 5};
    
    for(int i = 0; i < 5; i++){
        
        if(arr[i] % 2 == 0){
            cout << arr[i] << " even" << endl;
        }
        
    }
    
}

int main(){
   myfunc(5);
   
}

