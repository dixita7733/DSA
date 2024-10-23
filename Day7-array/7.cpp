// dynamic sizeof operartor size 
#include <iostream>
using namespace std;

int main(){
    
    int a[6] = {3, 6, 9, 2, 1, 8};
    
    
    
    int dysize = sizeof(a) / sizeof(a[0]);
    // cout << dysize << endl;
    
    for(int i = 0; i < dysize; i++){
        cout << a[i] << endl;
    }
    cout << "Size of a is: " << sizeof(a);
}