#include <iostream>
#include <string>
using namespace std;

class Counter {
private:
    int count;
    int incrementAmount;
    
public:
    Counter(int initial, int amount) {
        count = initial;
        incrementAmount = amount;
    }
    
    int getResult() {
        count += incrementAmount;
        return count;
    }
    
    string getDisplayText() {
        return "Counter dengan nilai awal " + to_string(count - incrementAmount) + 
               " setelah ditambah " + to_string(incrementAmount) + 
               " kali menjadi " + to_string(count);
    }
};

int main() {
    int initialValue, incrementAmount;
    
    cout << "Counter" << endl;
    cout << "Masukkan nilai awal: ";
    cin >> initialValue;
    cout << "Masukkan jumlah penambahan: ";
    cin >> incrementAmount;
    
    Counter counter(initialValue, incrementAmount);
    counter.getResult();
    
    cout << "Hasil: " << counter.getDisplayText() << endl;
    
    return 0;
}