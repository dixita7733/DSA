//multiple inheritance

#include <iostream>
using namespace std;

class a{
public:
    void a1(){
        cout << "I am from a1" << endl;
    }
};

class b {
public:
    void b1(){
        cout << "I am from b1" << endl;
    }
};

class c : public b, public a{
public:
    void c1(){
        cout << "I am from c1" << endl;
    }
};

int main(){
    c obj1;
    obj1.a1();
    obj1.b1();
    obj1.c1();

}