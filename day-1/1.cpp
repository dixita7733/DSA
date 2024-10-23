#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number: ";
    cin >> num;

    while (2 <= (num - 1))
    {
        if(num % 2 == 0 && num % 3 == 0){
            cout << "none-prime";
            break;
        }
        else{
            cout << "prime";
            break;
        }
    }
    
}




// #include <stdio.h>

// int primeornot(int);
// int main(){

//     int num, prime;
   

//     printf("Enter the any number: ");
//     scanf("%d", &num);

//     prime = primeornot(num);
//     if(prime == 1){
//         printf("The number is prime");
//     }
//     else{
//         printf("The number is not a prime");
//     }

//     // if (num % 2 == 0 && num % 3 == 0)
//     // {
//     //    printf(" %d is not a prime number", num);
//     // }
//     // else{
//     //     printf(" %d is prime number", num);
//     // }
    
// }