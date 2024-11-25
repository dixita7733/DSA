// Q4. Constructor and Destructor (10 marks)
// Input-Output Explanation:
// ● Input: Define a class and create objects using different constructors (default,
// parameterized, copy). Input data specific to constructors (e.g., for a parameterized
// constructor, input values for initializing attributes).
// ● Output: The program will display the initialized object attributes and demonstrate how
// destructors are invoked automatically when objects go out of scope.


#include <iostream>
#include <string.h>
using namespace std;

class festives{
public:
    char name[100];
    char season[200];

    festives(){
        cout << "ALL ARE FESTIVES SEASONS HERE";
    }

    festives(char name[], char season[]){
        strcpy(this->name, name);
        strcpy(this->season, season);

    }

    festives(festives &celebration){
           strcpy(celebration.name, "chotiholi");
           strcpy(this->name, name);
    }
};

int main(){
   festives();

   festives celebration("holi", "winter");
   festives celebration2(celebration);
   cout << endl;
   cout << celebration.name << " " << celebration.season << endl;
} 