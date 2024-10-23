// Calculate Average of Numbers Using Arrays 
#include <iostream>
using namespace std;

int main(){
    int size, num, sum, average;
    
    cout << "Enter the size of array:";
    cin >> size;
    
    // cout << "Enter the number: ";
    // cin >> num;
    
    int box[size];
    
    for(int i = 0; i < size; i++){
        cout << "box[" << i << "]: ";
        cin >> box[i];
        sum += box[i];
    }
    cout << endl;
    
    average = sum / size;
    
    cout << "average is: " << average;
}