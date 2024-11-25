// argument-passing -- 1] passing an address

#include <iostream>
using namespace std;

void myfunc(int *p){
    cout << *p;
}

int main(){
    int x = 3;
  
    
    myfunc(&x);
}