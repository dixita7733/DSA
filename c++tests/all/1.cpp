// What will be the output for N=4 when calculating the sum of digits?
// Input: Enter a number: 1234
// Output: 10

#include <iostream>
using namespace std;

int main(){

      int num, sum = 0, lastnum;
      cout << "Enter the number: ";
      cin >> num;

      while (num != 0)
      {
        lastnum = num % 10;
        sum += lastnum;
        num /= 10;

      }

      cout << "Total Sum is: " << endl;
      
      

}