#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double calculateDistanceFromOrigin(double x, double y) {
    return sqrt(x * x + y * y);
}

string getPointInfo(double x, double y, double distance) {
    return "Titik (" + to_string(x) + ", " + to_string(y) + 
           ") memiliki jarak " + to_string(distance) + 
           " dari titik asal (0, 0)";
}

int main() {
    double x, y;
    
    cout << "Kalkulator Jarak Titik" << endl;
    cout << "Masukkan koordinat x: ";
    cin >> x;
    cout << "Masukkan koordinat y: ";
    cin >> y;
    
    double distance = calculateDistanceFromOrigin(x, y);
    
    cout << "Hasil: " << getPointInfo(x, y, distance) << endl;
    
    return 0;
}