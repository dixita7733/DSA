//override method - runtime 

#include <iostream>
using namespace std;

class first{
  
  public:
  
  void first1(){
      cout << "I am from first1" << endl;
  }
};

class secound : public first{
  public:
  
  void first1(){
      cout << "I am from first1 but in child class" << endl;
      first s2;
      s2.first1();
  }
};

int main(){
    secound s1;
    s1.first1();
}