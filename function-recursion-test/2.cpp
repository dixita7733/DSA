//tnrs
// write a function in c++ that returns the square of a given integer without taking any paramaters . assume a global variable holds the value to be squared.


#include <iostream>
using namespace std;

int n;
int myfunc(){
        int  square;
        
        square = n * n;
        return square;
}

int main(){
   
   cout << "Enter the value: ";
   cin >> n;
   
   cout << myfunc();
}