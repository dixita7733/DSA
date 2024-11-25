// inheritance
#include <iostream>
using namespace std;

class Father{
public:

    void f1(){
        cout << "Heyyy I am father";
    }
    
};

class child : public Father{
public:
   void f2(){
        cout << "Heyyy I am child";
    }
};

int main(){
    child human;
    human.f2();
   
}


