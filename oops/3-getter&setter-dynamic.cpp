#include <iostream>
#include <cstring>
using namespace std;

class rnw{
private:
    int branches;
    char dept[200];
    int stars;
    
   
 public:  
    void setter(int branches, char dept[], int stars){
        this->branches = branches;
        strcpy(this->dept, dept);
        this->stars = stars;
    }
    
    void getter(){
        cout << "Total Branches: " << branches << endl;
        cout << "Dept: " << dept << endl;
        cout << "Total Stars: " << stars << endl;
        cout << "------------------------------";
    }
    
     rnw* objvalue(){
        return this;
    }
    
   
};



int main(){
    
    int branches;
    char dept[200];
    int stars;
    

        cout << "Total Branches: ";
        cin >> branches;
        cout << "Dept: " ;
        cin >> dept;
        cout << "Total Stars: ";
        cin >> stars;
    
    rnw mavdi, kalawad;
    rnw *mavdi2;
   
    // int box[3] = {mavdi , kalawad};
    
    // for(int i = 0; i < ) 
   
    mavdi.setter(branches, dept , stars);
    mavdi.getter();
    mavdi2 = mavdi.objvalue();
    mavdi2->getter();
    
    
}

