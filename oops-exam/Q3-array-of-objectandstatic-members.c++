// Array of Objects and Static Members (10 marks)
// Input-Output Explanation:
// ● Input: Enter details of 5 books (title, author, and price). Provide a threshold value to filter
// books based on price.
// ● Output: The program will display the details of books priced above the given threshold.
// Additionally, static members will count and display the total number of books created.

#include <iostream>
#include <string.h>
using namespace std;
 
 int size;
class books{
private:
    char title[400];
    char author[200];
    int price;
    static int total;

public:
   void set(char title[], char author[], int price){
       strcpy(this->title, title);
       strcpy(this->author, author);
       this->price = price;
       total++;
   
   }

   void get(){
       cout << "Title = " << title << endl 
            << "Author name = " << author << endl
            << "Price = " << price << endl;

            cout << "Total books number = " << total;

   }

};

//initialize total member variable
int books::total = 0;

int main(){

    cout << "Enter the total books number: ";
    cin >> size;
    books library[size];     
    char title[400];
    char author[200];

    
     
   
   for(int i = 0; i < size; i++){

      int price;
            cout << "Enter the book title: " ;
             cin >> title;

             cout << "Enter the author name: ";
             cin >> author;

             cout << "Enter the price: ";
             cin >> price;
             library[i].set(title, author, price);

   }


    for(int i = 0; i < size; i++){
      library[i].get();
   }
}