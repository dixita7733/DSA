#include <iostream>
#include <string.h>
using namespace std;

class cars{
public:
   static char name[200];
   char name2[200];
};

class cars2{
public:
    static void myfunc(){
       cout << "Heyy i am static function";
    }
};



char cars::name[200];
int main(){
   cars car1;
   strcpy(car1.name , "Volvo");
    strcpy(car1.name2 , "Volvo2");

   cars2::myfunc();
   cout << car1.name;
   cout << car1.name2;

}