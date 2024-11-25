//function to calculate factorial of number - take nothing return something
#include <iostream>
using namespace std;


int myfunc(){
    int factorial = 1;
   
    for(int i = 1; i <= 4; i++){  
        factorial *= i;
    }
    return factorial;  
}

int main(){
    int factnum = myfunc();
    cout << "Factorial is: " << factnum;
}
