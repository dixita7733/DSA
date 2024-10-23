#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    
    cout << "Enter the value of x: ";
    cin >> x;
    
    cout << "Enter the value of x: ";
    cin >> y;
    
    z   =  ((x * x * x) + (3 * x *  x * y) + (3 * x *  y * y) + (y * y * y) );

     
     cout  << "answer is: "<<  z;
}