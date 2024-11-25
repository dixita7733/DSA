//sizeof

#include <iostream>
using namespace std;

int main(){
    int size;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    int a[size];
    
    for(int i = 0; i < 5; i++){
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
    
    cout << sizeof(a);
}