//constructor

#include <iostream>
#include <string.h>
using namespace std;

class balance{
public:
    int id;
    
    balance(int id){
        this->id = id;
    }
    
    balance(balance &s1){
        s1.id = 25;
        this->id = s1.id;
    }
};

int main(){
    balance s1(5);
    cout << s1.id << endl;
    balance s2(s1);
    balance s3(s2);
    cout << s2.id << endl;
    cout << s3.id << endl;
    
}