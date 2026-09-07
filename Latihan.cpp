// Program untuk menentukan luas alas dan volume dari sebuah kerucut

#include<iostream>
using namespace std;

int main () {
    int radius = 0;
    int tinggi = 0;
    float LuasAlas = 0;
    cout << "Masukkan radius dari alas kerucut: ";
    cin >> radius;
    cout << "Masukkan tinggi dari kerucut: ";
    cin >> tinggi;
    float Perhitungan_LuasAlas = 3.14 * radius * radius;
    float Perhitungan_Volume = 1.0/3.0 * Perhitungan_LuasAlas * tinggi;
    cout << "Luas Alas dari kerucut adalah: " << Perhitungan_LuasAlas << endl;
    cout << "Volume dari kerucut adalah: " << Perhitungan_Volume << endl;

    return 0;
}