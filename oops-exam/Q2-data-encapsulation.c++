// Data Encapsulation (10 marks)
// Input-Output Explanation:
// ● Input: Create a BankAccount object with attributes like account number and balance.
// Input new balance values using setter methods.
// ● Output: The program should display account details like account number and updated
// balance using getter methods. The private attributes should not be directly accessible
// outside the class, ensuring encapsulation.

#include <iostream>
using namespace std;

class bank{
private:
    int account_number;
    int balance;
    
public:
   void set(){
       cout << "Enter the account number: " << endl;
       cin >> account_number;

       cout << "Enter the new balance: " << endl;
       cin >> balance;
   }

   void get(){
      cout << "Account Number: " << account_number << endl;
      cout << "Balance: " << balance << endl;
   }
};

int main(){
   bank bankaccount;
   bankaccount.set();
   bankaccount.get();
}