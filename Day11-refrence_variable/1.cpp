//refrence variable ----- is saloon 

#include <iostream>
using namespace std;

int main(){
    int bonanza = 1000;
    
    int &saloon = bonanza; // refrence variable of boanaza variable 
    
    cout << "saloon price: " << saloon << endl;
    cout << "Bonanza saloon price: " << bonanza << endl;
    cout << endl;
    
    saloon = 100000;
    
    cout << "Bonanza saloon price: " << bonanza << endl;
    cout << "saloon price: " << saloon << endl;
    
    
}