//leap year or not
#include <iostream>

using namespace std;

int main() {
    int startyear;
    int endyear;

    cout << "Enter the startyear: ";
    cin >> startyear;

    cout << "Enter the endyear: ";
    cin >> endyear;

    int size = endyear - startyear + 1; 
    int count = startyear;  
    int counta[size];

   
    for (int i = 0; i < size; i++) {
        
      //  cout << count << " "; 
       
        if(count % 4 == 0){
            cout << "Leap year: " << count << endl;
        }
        else{
            cout << "Not Leap year: " << count  << endl;
        }
         count++; 
        
    }

    return 0;
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

