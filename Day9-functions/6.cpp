//write a function to fibonacci series - take something return nothing 
#include <iostream>
using namespace std;

void myfunc(int first, int secound ){
    int next;
    for(int i = 0; i <= 5; i++){
        cout << first << " " ;
        next = first + secound;
        first = secound;
        secound = next;
        
    }
    
}
int main(){
   
   myfunc(0, 1);
                                                                                
}
