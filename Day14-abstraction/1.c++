//abstraction

#include <iostream>
using namespace std;

class first{
   public:
   
   virtual void first1() = 0;
};

class firstchild : public first{
    public: 
    
    void first1(){
        cout << "Heyy!!!";
    }
};

int main(){
    firstchild s1;
    s1.first1();
}