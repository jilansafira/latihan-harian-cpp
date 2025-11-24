/*
Nama Program : Persamaan Kuadrat
Nama         : Jilan Safira
NPM          : 140810250070
Tanggal Buat : 23/09/2025
Deskripsi    : Implementasikan rumus berikut ini ke dalam sebuah fungsi:
Tidak boleh menggunakan std:sqrt() bawaan cmath untuk kalkulasi rumus tersebut! Buat fungsi baru agar memudahkan pengerjaan.
Jawaban tidak perlu 100% akurat karena kalian mengimplementasikan fungsi akar kuadrat sendiri
*/

#include <iostream>
using namespace std;

double akar(double n) {
    double x = n;
    double y = 1;
    double e = 0.00001;  

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    double a, b, c;
    cout << "Masukkan nilai a, b, c: ";
    cin >> a >> b >> c;

    double D = b*b - 4*a*c; 
    if (D < 0) {
        cout << "Akar imajiner (tidak nyata)" << endl;
    } else {
        double x1 = (-b + akar(D)) / (2*a);
        double x2 = (-b - akar(D)) / (2*a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}
