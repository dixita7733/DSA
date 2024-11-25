//take something return something 
#include <iostream>
using namespace std;

int myfunc(int a, int b){
    
    return a+b;
}
int main(){
    cout << "sum is:" << myfunc(5,5);
}