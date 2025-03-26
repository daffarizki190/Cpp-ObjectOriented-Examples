#include <iostream>
#include <string>
using namespace std;

char calculateGrade(double score) {
    if (score >= 80) return 'A';
    else if (score >= 70) return 'B';
    else if (score >= 60) return 'C';
    else if (score >= 50) return 'D';
    else return 'E';
}

string generateStudentInfo(string name, string id, double score) {
    char grade = calculateGrade(score);
    return "Siswa " + name + " (ID: " + id + ") mendapatkan nilai " + to_string(int(score)) + " dengan grade: " + grade;
}

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
    
    cout << "Hasil: " << generateStudentInfo(name, id, score) << endl;
    
    return 0;
}