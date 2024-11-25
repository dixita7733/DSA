// recursive function
//write a function in c++ to compute the sum of the first n natural numbers

#include <iostream>
using namespace std;

int myfunc(int n){
if(n <= 1){
    return 1;
}
else{
    return n + myfunc(n - 1);
}
}

int main(){
   
   cout << myfunc(5);
}