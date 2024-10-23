// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15...

#include <iostream>
using namespace std;

int main(){
    int userno = 1,stopableno;
    
    cout << "Enter the number: ";
    cin >> stopableno;

    for (int row = 1; row <= stopableno; row++)
    {
        for (int col = 1; col <= row; col++)
        {
           
           if(userno > stopableno){
               break;
           }
           cout << userno << " " ;
           userno++;
          
           
          
        }
        cout << endl;
        
    }
    
}