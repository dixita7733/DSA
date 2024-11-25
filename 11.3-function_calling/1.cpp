// function calling - 1] call by value

#include <iostream>
using namespace std;

void myfunc(int n){
    cout << "After calling a: " << n + n << endl;
}

int main(){
    int a = 5;
    cout << "Before calling: " << a << endl;
    
    myfunc(a);
}