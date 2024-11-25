//overload - compile method 

#include <iostream>
using namespace std;

class cars{
public:
    void car1(){
        cout << "I am from car1";
    }
    
    void car1(int n){
        cout << "I am from car1 but method2 with n =" << n << endl;
    }
    
};


int main(){
    cars s1;
    s1.car1(5);
    
}

