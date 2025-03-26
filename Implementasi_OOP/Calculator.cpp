#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;
    char operation;
    
public:
    Calculator(double a, double b, char op) {
        num1 = a;
        num2 = b;
        operation = op;
    }
    
    double calculate() {
        switch(operation) {
            case '+': return num1 + num2;
            case '-': return num1 - num2;
            case '*': return num1 * num2;
            case '/': 
                if(num2 != 0) {
                    return num1 / num2;
                } else {
                    cout << "Pembagian dengan nol" << endl;
                    return 0;
                }
            default:
                cout << "Operasi tidak valid" << endl;
                return 0;
        }
    }
};

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
    
    Calculator calc(a, b, op);
    
    cout << "Hasil: " << a << " " << op << " " << b << " = " << calc.calculate() << endl;
    
    return 0;
}