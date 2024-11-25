// hybrid inheritance 


#include <iostream>
using namespace std;

class a{
public:
    void a1(){
        cout << "I am from a1" << endl;
    }
};

class b : public a {
public:
    void b1(){
        cout << "I am from b1" << endl;
    }
};

class c : public a{
public:
    void c1(){
        cout << "I am from c1" << endl;
    }
};

class d: public c, public b{
public:
    void d1(){
        cout << "I am from d1" << endl;
    }
};

int main(){
    d obj1;
   
    obj1.b::a1();
    obj1.b1();
    obj1.c1();

}