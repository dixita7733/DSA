// argument-passing -- 1] passing by pointer

#include <iostream>
using namespace std;

void myfunc(int *p){
    cout << *p;
}

int main(){
    int x = 3;
    int *xptr = &x;
    
    myfunc(xptr);
}