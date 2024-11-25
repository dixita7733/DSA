#include <iostream>
#include <string.h>
using namespace std;

class mystudents{
private:
   char name[100];
   int number;

public:

 void set(char name[], int number){
    strcpy(this->name, name);
    this->number = number;
 }

 void get(){
    cout << "Name = " << name << endl << "Number = " << number;
 }
};

int main(){
   mystudents std1;
   std1.set("dishu", 1220);
   std1.get();
   
//    std1.number = 2210;
//    strcpy(std1.name, "dishu2");

//    cout << std1.name << "  " <<  std1.number ;
}