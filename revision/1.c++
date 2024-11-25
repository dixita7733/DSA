//array of object

#include <iostream>
#include <string.h>
using namespace std;

class filmcity{
private:
    char filmname[200];
    int price;

public:
   void set(char filmname[], int price){
       strcpy(this->filmname, filmname);
       this->price = price;
   }

   void get(){
    cout << "Filmname = " << filmname << " " << "Price = " << price << endl;
   }
};


int main(){
   filmcity pictures[3];
   char filmname[200];
   int price;

   for(int i = 0; i < 3; i++){
      cout << "film name = " ;
      cin >> filmname;

      cout << "Price = ";
      cin >> price;

      pictures[i].set(filmname, price);
   }

   for(int i = 0; i < 3; i++){
      pictures[i].get();
   }
}