//single inheritance

#include <iostream>
using namespace std;

class parent{
public:
     void a(){
        cout << "I am from class parent";
     }
};

class baseclass : public parent{
public:
    void b(){
        cout << "I am from class baseclass";
    }
};

int main(){
     baseclass a1;
     a1.a();
     a1.b();
          
          
}