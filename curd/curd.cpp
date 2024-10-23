// https://www.geeksforgeeks.org/cpp-programming-examples/?ref=shm
#include <iostream>
using namespace std;

int main(){

int size = 0;
int user;
int selection;
int upnum;
int upvalue;
int innum;
int invalue;
int delp;


cout << "Enter the array of size: ";
cin >> size;

// user = size;


int a[100];
int dysize = sizeof(a) / sizeof(a[0]);

for (int i = 0; i < size; i++){
    cout << "a[" << i << "]:";
    cin >> a[i];
}

     cout << "1 insert" << endl;
     cout << "2 Update" << endl;
     cout << "3 View" << endl;
     cout << "4 Delete" << endl;
     

     
     do{
           cout << "Enter the any number of operation: ";
           cin >> selection;
         
         switch(selection)
         {
             case 1: 
             cout << "insert" << endl;
             
             cout << "Enter the index number for insertion: ";
             cin >> innum;
             
             cout << "Enter the inserting value: ";
             cin >> invalue;
             
            //  for(int i = dysize; i >=innum; i--){
            //      a[i+1] = a[i];
            //  }
            
            for(int i = size+1; i >= innum; i--){
                a[i] = a[i-1];
            }
             
                  a[innum] = invalue;
                  size++;
             
             break;
             
             case 2:
             cout << "update" << endl;
             
             cout << "Enter the updation of index number: ";
             cin >> upnum;
             
             cout << "Enter the updation value: ";
             cin >> upvalue;
             
             a[upnum] = upvalue;
             
             break;
             
             case 3:
             
             cout << "view" << endl;
             
             for(int i = 0; i < size; i++){
                 cout << a[i] << endl;
             }
             
             break;
             
             case 4: 
             
             cout << "delete" << endl;
             cout << "Enter the index of deleting value: ";
             cin >> delp;
             
             
             for(int i = delp; i < size; i++){
                 a[i] = a[i+1];
                 
                
             }
             size--;
            
              break;
         }
         
     }while(selection != 0);
}