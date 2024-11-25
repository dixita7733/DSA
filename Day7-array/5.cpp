//leap year or not
#include<iostream>
using namespace std;

int main(){
    int size, startyear, endyear;
    
    size = 10;

     int box[size];
    
    cout << "Enter the start year: ";
    cin >> startyear;
    
    cout << "Enter the endyear";
    cin >> endyear;
    
    
    
    for(int i = startyear; i <= endyear; i++){
        cout << "year :" << i << endl;
       
        
        if(i % 4 == 0){
            cout << "Leap year is:" << i << endl;
        }
        else{
            cout << "Not leap year:" << i << endl;
        }
    }
}



//static code using array

// #include <iostream>

// using namespace std;

// int main() {
  
//        int counta[10] = { 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030};
//         for (int i : counta) {
//              if(i % 4 == 0){
//               cout << "leap year: " << i << endl;
//            }
//            else{
//                cout << "Not Leap year: " << i << endl;
//            }
//         }

//     return 0;
// }

