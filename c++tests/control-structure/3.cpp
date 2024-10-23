// 7. For input 1, what is the output from the switch case?
// Input: Enter day number (1-7): 1
// Output: Monday

#include <iostream>
using namespace std;


int main(){
int user ;

cout << "Enter the num 1 to 7: ";
cin >> user;

switch(user) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 7:
    cout << "Saturday";
    break;
  
   
}
}
