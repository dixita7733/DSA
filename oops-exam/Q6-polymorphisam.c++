// Q6. Polymorphism (10 marks)
// Input-Output Explanation:
// ● Input: Define a base class Shape with a method calculateArea. Create objects of
// derived classes Circle and Rectangle and input dimensions like radius, length, and
// width.
// ● Output: The program will calculate and display the area for each shape using method
// overriding (runtime polymorphism). It will also demonstrate how the base class pointer
// calls the derived class method at runtime.

#include <iostream>
using namespace std;

class calculatearea{
public:
     int width;
     int height;
     int radius;
};

class circle : public calculatearea{
public:
     double pi = 3.14;
     double circle;
     void area(){
          cout << "Enter the circle radius: " ;
          cin >> radius;

          circle = pi * radius * radius;
          cout << "circle area = " << circle << endl;
     }
};

class rectangle : public calculatearea{
public:
     int rectangle;
     void area(){
          cout << "Enter the rectangle width: " ;
          cin >> width;

           cout << "Enter the rectangle height: " ;
          cin >> height;

          rectangle = width * height;
          cout << "circle area = " << rectangle << endl;

              circle o2;
              o2.area();
     }
};

int main(){
    rectangle o1;

    o1.area();

    // *calculatearea calculatearea;
    
}