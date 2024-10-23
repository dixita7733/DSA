// Write a Program to create a menu-driven program for Telecom call service
// conversation using nested switch case.
// For example,
// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati
// Enter your choice: 1
// Press 1 for Internet Recharge
// Press 2 for Top-up Recharge
// Press 3 for Special Recharge
// Enter your choice: 2
// You have successfully done a Top-up Recharge.
// ---------------------------------------------
// For example,
// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati
// Enter your choice: 2
// Internet Recharge ke liye 1 dabaiye
// Top-up Recharge ke liye 2 dabaiye
// Special Recharge ke liye 3 dabaiye


// Enter your choice: 1
// Aapne safaltapurvak Internet Recharge kar liya he.
// ---------------------------------------------
// For example,
// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati
// Enter your choice: 3
// Internet Recharge mate 1 dabavo
// Top-up Recharge mate 2 dabavo
// Special Recharge mate 3 dabavo
// Enter your choice: 3
// Tame safaltapurvak Special Recharge karyu chhe.

#include <iostream>
using namespace std;

int main() {
    int user, english, hindi, gujarati;

    cout << "Press 1 for English" << endl;
    cout << "Press 2 for Hindi" << endl;
    cout << "Press 3 for Gujarati" << endl;
    cin >> user;

    switch (user) {
        case 1:
            cout << "Press 1 for Internet Recharge" << endl;
            cout << "Press 2 for Top-up Recharge" << endl;
            cout << "Press 3 for Special Recharge" << endl;
            cin >> english;
            switch (english) {
                case 1:
                    cout << "You have successfully done an Internet Recharge." << endl;
                    break;
                case 2:
                    cout << "You have successfully done a Top-up Recharge." << endl;
                    break;
                case 3:
                    cout << "You have successfully done a Special Recharge." << endl;
                    break;
                default:
                    cout << "Invalid choice." << endl;
                    break;
            }
            break;

        case 2:
            cout << "Internet Recharge ke liye 1 dabaiye" << endl;
            cout << "Top-up Recharge ke liye 2 dabaiye" << endl;
            cout << "Special Recharge ke liye 3 dabaiye" << endl;
            cin >> hindi;
            switch (hindi) {
                case 1:
                    cout << "Aapne safaltapurvak Internet Recharge kar liya hai." << endl;
                    break;
                case 2:
                    cout << "Aapne safaltapurvak Top-up Recharge kar liya hai." << endl;
                    break;
                case 3:
                    cout << "Aapne safaltapurvak Special Recharge kiya hai." << endl;
                    break;
                default:
                    cout << "Anya bharo." << endl;
                    break;
            }
            break;

        case 3:
            cout << "Internet Recharge mate 1 dabavo" << endl;
            cout << "Top-up Recharge mate 2 dabavo" << endl;
            cout << "Special Recharge mate 3 dabavo" << endl;
            cin >> gujarati;
            switch (gujarati) {
                case 1:
                    cout << "Tame safaltapurvak Internet Recharge karyu chho." << endl;
                    break;
                case 2:
                    cout << "Tame safaltapurvak Top-up Recharge karyu chho." << endl;
                    break;
                case 3:
                    cout << "Tame safaltapurvak Special Recharge karyu chho." << endl;
                    break;
                default:
                    cout << "Anya variant." << endl;
                    break;
            }
            break;

        default:
            cout << "Invalid choice of language." << endl;
            break;
    }

    
}
