// average of array 

#include <iostream>
using namespace std;

int main(){
    int sum;
    int a[5] = {2 , 3 , 7 , 1 , 4};

    for (int i = 0; i < 5; i++)
    {
    //   cout << a[i];
       sum += a[i];
    }

    sum = sum / 5; 
    cout << "Average:" << sum;
    

}