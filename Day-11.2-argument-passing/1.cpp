// argument-passing -- 1] passing a value
#include <iostream>
using namespace std;

void myfunc(int a, int b){
    cout << "addision: " << a + b;
}


int main(){
    myfunc(5, 5);
}