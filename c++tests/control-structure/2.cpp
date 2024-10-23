// What is the grade for a student with 85 marks?
// Input: Enter marks: 85
// Output: B/

#include <iostream>
using namespace std;

int main(){

     int a = 90;
     int b = 80;
     int c = 70;
     int user;
     
     cout << "Enter the number: ";
     cin >> user;

     if (user >= 90 ){
        cout << "A";
     }
     else if (user >= 80 && user <= 90)
     {
        cout << "B";
     }
     else{
        cout << "c";
     }
     
     
}