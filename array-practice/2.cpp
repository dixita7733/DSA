// Display Largest Element of an array 

#include <iostream>
using namespace std;

int main(){
    int size;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    int box[size];
    
    for(int i = 0; i < size; i++)
    {
        cout << "box[" << i << "]: ";
        cin >> box[i];
        if(box[0] < box[i]){
            box[0] = box[i];
            cout << box[0] << endl;
        }
    }
    
    cout << "max is:" << box[0];
}