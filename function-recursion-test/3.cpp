//tsrs
// write a function in c++ that takes two floating-point numbers as input and returns their average .

#include <iostream>
using namespace std;


float myfunc(float a, float b){
        float  average;
        
        average = a + b;
        return average / 2;
}

int main(){
   
   myfunc(10.0, 20.0);
   cout << myfunc(10.0, 20.0);
}