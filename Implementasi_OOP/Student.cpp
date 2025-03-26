#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string id;
    double score;
    
public:
    Student(string n, string i, double s) {
        name = n;
        id = i;
        score = s;
    }
    
    char calculateGrade() {
        if (score >= 80) return 'A';
        else if (score >= 70) return 'B';
        else if (score >= 60) return 'C';
        else if (score >= 50) return 'D';
        else return 'E';
    }
    
    string getDisplayText() {
        return "Siswa " + name + " (ID: " + id + ") mendapatkan nilai " + to_string(int(score)) + " dengan grade: " + calculateGrade();
    }
};

int main() {
    string name, id;
    double score;
    
    cout << "Informasi Siswa" << endl;
    cout << "Masukkan nama siswa: ";
    cin.ignore();
    getline(cin, name);
    cout << "Masukkan ID siswa: ";
    getline(cin, id);
    cout << "Masukkan nilai siswa (0-100): ";
    cin >> score;
    
    Student student(name, id, score);
    
    cout << "Hasil: " << student.getDisplayText() << endl;
    
    return 0;
}