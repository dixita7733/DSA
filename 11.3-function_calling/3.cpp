// function calling - 1] call by const refrence

#include <iostream>
using namespace std;

void myfunc(const int &cname){
    // cname = cname + 5; // can not modify const value so display also error 
}

int main(){
    int a = 10;
    cout << "Before calling cname: " << a << endl;
    
    myfunc(a);
    
    cout << "After calling cname: " << a << endl;
    
}

