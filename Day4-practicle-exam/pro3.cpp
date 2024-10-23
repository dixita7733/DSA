#include <iostream>
using namespace std;

int main() {
    float base_salary, hra, ta, da, gross_salary;

    cout << "Enter the base salary: ";
    cin >> base_salary;

    cout << "Enter the hra value (as percentage): ";
    cin >> hra;

    cout << "Enter the ta value (as percentage): ";
    cin >> ta;

    cout << "Enter the da value (as percentage): ";
    cin >> da;

    hra = (hra / 100) * base_salary;
    ta = (ta / 100) * base_salary;
    da = (da / 100) * base_salary;

    gross_salary = base_salary + hra + ta + da;

    cout << "The gross salary is: " << gross_salary << endl;

    
}
