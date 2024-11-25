// function calling - 1] call by refrence

#include <iostream>
using namespace std;

void myfunc(int &refvar){
    refvar = refvar + 5;
}

int main(){
    int a = 10;
    cout << "Before calling refvar: " << a << endl;
    
    myfunc(a);
    
    cout << "After calling refvar: " << a << endl;
    
}

