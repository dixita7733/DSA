// Q5. Inheritance and Ambiguity Resolution (10 marks)
// Input-Output Explanation:
// ● Input: Create a hierarchy with base and derived classes. Input data relevant to the
// classes (e.g., student details in one class and teacher details in another).
// ● Output: The program will show single and multiple inheritance in action. For multiple
// inheritance, ambiguity will be resolved using the membership label operator, ensuring
// correct attribute or method access.


// ------------------------------- using hybrid inheritance ----------------------------
#include <iostream>
#include <string.h>
using namespace std;

class student{
public:
     void stud1(){
        cout << "I am a student" << endl;
     }
};

class teacher1 : public student{
public:

       void tech1(){
        cout << "I am a teacher" << endl;
       }
};

class teacher2 : public student{
public:

      void tech2(){
        cout << "I am a teacher2" << endl;
      }
};

class teacher3 : public teacher1, public teacher2{
public:

      void tech3(){
        cout << "I am a teacher3" << endl;
      }
};


int main(){
    teacher3 st;

    st.teacher1::stud1();  
    st.tech1();  
    st.tech2();  
    st.tech3(); 
}

// ---------------------------------- without ambiuty error using hierarchical inheritance ------------

// #include <iostream>
// using namespace std;

// class student{
// public:
//     void std1(){
//         cout << "I am a student" << endl;
//     }
// };

// class teacher1 : public student{
// public:
//      void tech1(){
//         cout << "I am a teacher1" << endl;
//      }
// };

// class teacher2 : public student{
// public:
//      void tech2(){
//         cout << "I am a teacher2" << endl;
//      }
// };



// int main(){
//     teacher2 st;
//     teacher1 st2;
//     st.tech2();
//     st2.tech1();
// }





