//constructor

#include <iostream>
#include <string.h>
using namespace std;

class car{
public:
    int id;
    
    car(int id){
        this->id = id;
    }
    
    car(car &s1){
        s1.id = 25;
        this->id = s1.id;
    }
};

int main(){
    car s1(5);
    cout << s1.id << endl;
    car s2(s1);
    car s3(s2);
    cout << s2.id << endl;
    cout << s3.id << endl;


    
}