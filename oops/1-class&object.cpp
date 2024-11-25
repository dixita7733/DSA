//classes and objects

#include <iostream>
#include <string>
using namespace std;

class teacher{
    //properties attribute
public:
    string name;
    string subject;
    double salary;
    string dept;
    
    //method member function
    void change_dept(string new_dept){
        dept = new_dept;
    }
    
};

int main(){
    teacher t1;
    t1.name = "dishu";
    t1.subject = "C++";
    t1.salary = 25000;
    t1.dept = "computer science";
    
    cout << "Name is: " << t1.name;
    return 0;
}