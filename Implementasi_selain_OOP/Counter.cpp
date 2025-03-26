#include <iostream>
#include <string>
using namespace std;

int incrementCounter(int count, int amount) {
    return count + amount;
}

string getCounterInfo(int initialValue, int incrementAmount, int finalValue) {
    return "Counter dengan nilai awal " + to_string(initialValue) + 
           " setelah ditambah " + to_string(incrementAmount) + 
           " kali menjadi " + to_string(finalValue);
}

int main() {
    int initialValue, incrementAmount;
    
    cout << "Counter" << endl;
    cout << "Masukkan nilai awal: ";
    cin >> initialValue;
    cout << "Masukkan jumlah penambahan: ";
    cin >> incrementAmount;
    
    int finalValue = incrementCounter(initialValue, incrementAmount);
    
    cout << "Hasil: " << getCounterInfo(initialValue, incrementAmount, finalValue) << endl;
    
    return 0;
}