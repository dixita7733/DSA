//array of pointer

#include <iostream>
using namespace std;

int main(){
    int box[5] = {2, 6, 4, 3, 1};

    int ptr[5];

    for(int i = 0; i < 5; i++){
        ptr[i] = box[i];

        cout << ptr[i] << endl;
    }
}