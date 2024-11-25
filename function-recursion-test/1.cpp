//tsrn
// write a function in c++ that takes an integer as input and displays wheather the number is possitive, negative or zero.


#include <iostream>
using namespace std;


void myfunc(int n){
        if(n > 0){
            cout << "Positive";
        }
        else if(n == 0){
            cout << "Neutral";
        }
        else{
            cout << "Negative";
        }
}

int main(){
   int n; 
   cout << "Enter the value: ";
   cin >> n;
   
   myfunc(n);
}