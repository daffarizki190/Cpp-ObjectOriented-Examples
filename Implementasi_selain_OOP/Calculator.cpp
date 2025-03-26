#include <iostream>
using namespace std;

double calculate(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if(b != 0) {
                return a / b;
            } else {
                cout << "Error: Pembagian dengan nol" << endl;
                return 0;
            }
        default:
            cout << "Operasi tidak valid" << endl;
            return 0;
    }
}

int main() {
    double a, b;
    char op;
    
    cout << "Kalkulator" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    
    cout << "Hasil: " << a << " " << op << " " << b << " = " << calculate(a, b, op) << endl;
    
    return 0;
}