#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
    
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    
    double calculateArea() {
        return length * width;
    }
    
    string getDisplayText() {
        return "Persegi panjang dengan panjang " + to_string(length) + 
               " dan lebar " + to_string(width) + 
               " memiliki luas " + to_string(calculateArea());
    }
};

int main() {
    double length, width;
    
    cout << "Kalkulator Luas Persegi Panjang" << endl;
    cout << "Masukkan panjang: ";
    cin >> length;
    cout << "Masukkan lebar: ";
    cin >> width;
    
    Rectangle rect(length, width);
    
    cout << "Hasil: " << rect.getDisplayText() << endl;
    
    return 0;
}