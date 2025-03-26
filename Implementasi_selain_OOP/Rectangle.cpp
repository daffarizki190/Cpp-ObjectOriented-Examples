#include <iostream>
#include <string>
using namespace std;

double calculateRectangleArea(double length, double width) {
    return length * width;
}

string getRectangleInfo(double length, double width) {
    double area = calculateRectangleArea(length, width);
    return "Persegi panjang dengan panjang " + to_string(length) + 
           " dan lebar " + to_string(width) + 
           " memiliki luas " + to_string(area);
}

int main() {
    double length, width;
    
    cout << "Kalkulator Luas Persegi Panjang" << endl;
    cout << "Masukkan panjang: ";
    cin >> length;
    cout << "Masukkan lebar: ";
    cin >> width;
    
    cout << "Hasil: " << getRectangleInfo(length, width) << endl;
    
    return 0;
}