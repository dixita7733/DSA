// multiplication of array 
#include <iostream>
using namespace std;

int main(){
    int size, num, sum = 1;  
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int box[size];  
    
    for(int i = 0; i < size; i++){
        cout << "box[" << i << "]: ";
        cin >> box[i];
        sum *= box[i];  
    }
    
    cout << endl;
    
    cout << "Multiplication is: " << sum;
    
    return 0;
}
