#include <iostream>
#include <string.h>
using namespace std;

class apple{
public:
    int id;
    
    apple(int id){
        this->id = id;
    }
    
    apple(apple &s1){
        s1.id = 25;
        this->id = s1.id;
    }
};



int main(){
    apple s1(5);
    cout << s1.id << endl;
    apple s2(s1);
    apple s3(s2);
    cout << s2.id << endl;
    cout << s3.id << endl;


    
}