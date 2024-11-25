//overload method
#include <iostream>
#include <string.h>
using namespace std;


//overload method class
class adminpanel{
public:
    void data(){
        char classname[200]; 

        cout << "Enter class name = ";
        cin >> classname;     
        cout << classname <<endl;
    }

    void data(char name[]){
        char teacher_name[200];
        cout << "Teacher Name = " ;
        cin >> teacher_name;
        cout << endl;
        cout << teacher_name << " " << "for student " << name <<endl;
    }
};
//overload method class end



//overridemethod classes 
class adminpanel2{
public:
    void data2(){
        char principal_name[200];

        cout << "Enter the principal name = ";
        cin >> principal_name;

        cout << principal_name << endl;

    }
};

class adminpanelchild : public adminpanel2{
public:
    void data2(){
        char department[200];

        cout << "Enter the department = ";
        cin >> department;

        cout << department << endl;

        adminpanel2 adm3;
        adm3.data2();
    }
};
//overridemethod classes end


int main(){
   cout << "----------------overload method------------------------" << endl;

   adminpanel adm;
    char name[200];
    cout << "Name = ";
    cin >> name;
    
   adm.data(name);
   adm.data();

    cout << "----------------overload method End------------------------" << endl;

   cout << "----------------override method------------------------" << endl;

    adminpanelchild adm2;
    adm2.data2();

    cout << "----------------override method End------------------------" << endl;

}