// argument-passing -- 1] passing an array

#include <iostream>
using namespace std;

void myfunc(int box[]){
    cout << box[0];
}

int main(){
    int arr[5] = { 2, 6, 1, 8, 3};
    
    myfunc(arr);
}
