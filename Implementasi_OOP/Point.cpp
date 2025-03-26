#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Point {
private:
    double x;
    double y;
    
public:
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }
    
    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }
    
    string getDisplayText() {
        return "Titik (" + to_string(x) + ", " + to_string(y) + 
               ") memiliki jarak " + to_string(distanceFromOrigin()) + 
               " dari titik asal (0, 0)";
    }
};

int main() {
    double x, y;
    
    cout << "Kalkulator Jarak Titik" << endl;
    cout << "Masukkan koordinat x: ";
    cin >> x;
    cout << "Masukkan koordinat y: ";
    cin >> y;
    
    Point point(x, y);
    
    cout << "Hasil: " << point.getDisplayText() << endl;
    
    return 0;
}