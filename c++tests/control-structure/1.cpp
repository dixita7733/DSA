//  If a user enters -10, what will be the output?
// Input: Enter a number: -10
// Output: Negative

#include <iostream>
using namespace std;

int main(){
    int user;

    cout << "Enter the any number ";
    cin >> user;

    if(user < 0){
        cout << "Negative";
    }
    else if (user == 0)
    {
        cout << "Neutral";
    }
    else{
        cout << "Positive";
    }
    
}
