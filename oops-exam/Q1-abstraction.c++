#include <iostream>
using namespace std;

class top{
public:
    virtual void s1() = 0;
    virtual void s2() = 0;

};

class top2 : public top{
public:
    void s1(){
        cout << "Heyy i am the sara from s1" << endl;
    }
    void s2(){
        cout << "Heyy i am the sara's friend from s2" << endl;
    }
};

int main(){
   top2 obj1;
   obj1.s1();
   obj1.s2();
}