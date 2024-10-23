#include <iostream>
using namespace std;

int main(){
    
    int size;
    
    cout << "Enter the array of size: ";
    cin >> size;
    
    int a[size];
    
    for(int i = 0; i < size; i++){
        cout << "a[" << i << "]: " ;
        cin >> a[i];
    }
    
    for(int i : a){
        cout << i;
    }
}