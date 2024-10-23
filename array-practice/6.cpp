// even num 
#include <iostream>
using namespace std;

int main(){
    int size;
    
    cout << "Enter the size: ";
    cin >> size;
    
    int box[size];
    
    for(int i = 0; i <size; i++){
        cout << "box[" << i << "]: ";
        cin >> box[i];
    }
    
     for(int i = 0; i <size; i++){
       if(box[i] % 2 == 0){
           cout << "even num: " << box[i] << endl;
       }
       else{
           cout << "odd num: " << box[i];
       }
    }
}