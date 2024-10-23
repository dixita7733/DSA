#include <iostream>
#include <climits>
using namespace std;

int main(){
    
    int size;
    int num = INT_MAX;
    int min = INT_MIN;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
   int a[size];
    
    for(int i = 0; i < size; i++){
        cout << "a[" << i << "]: " ;
        cin >> a[i];
        
        if(a[i] < num){
            num = a[i];
        }
        if(a[i] > min){
            min = a[i];
        }
        
    }
    cout << "min value is: " << num ;
    cout << "max value:" << min;
    
}