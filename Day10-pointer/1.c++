#include <iostream>
using namespace std;

int main(){
    int *ptr;

    int a = 5;
    ptr = &a;

    cout << "value is: " << *ptr;
}