//function call in another function
#include <iostream>
using namespace std;
void myfunc1(){
    cout << "This is secound function";
}
void myfunc(){
    cout << "This is first function" << endl;
    myfunc1();
}
int main(){
    myfunc();
}