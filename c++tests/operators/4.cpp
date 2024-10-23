// Input: 5 > 3 && 4 < 6
// Output: true

#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int b = 3;
    int c = 4; 
    int d = 6;
    bool e = a > b && c < d;

    if (e == 1)
    {
       cout << "true";
    }
    else{
        cout << "false";
    }
    
    
}