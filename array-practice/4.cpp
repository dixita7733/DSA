// find index no. of given by user number 
#include <iostream>
using namespace std;

int main(){
    int size, num;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    int box[size];
    
    for(int i = 0; i < size; i++){
        cout << "box[" << i << "]: ";
        cin >> box[i];
    }
    cout << endl;
    
    cout << "Enter the any number for find index: ";
    cin >> num;
    
    for(int i = 0; i < size; i++){
        if(num == box[i]){
            cout << "index no. is: " << i ;
        }
    }
}