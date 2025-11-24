/*
Nama Program : Latihan 2
Nama         : Jilan Safira
NPM          : 140810250070
Tanggal Buat : 23/09/2025
Deskripsi    : Kiki adalah seorang siswa yang sedang belajar tentang deret aritmatika. Ia ingin membuat program sigma yang dapat menghitung nilai di mana n dan m adalah bilangan bulat positif lalu c adalah bilangan real. Bantulah Kiki untuk membuat program sigma menggunakan fungsi yang menerima tiga parameter, n , m, dan c lalu menampilkan hasilnya.*/

#include <iostream>
using namespace std;

int pangkat(int base, int eksponen) {
    int hasil = 1;
    for (int i = 0; i < eksponen; i++) {
        hasil *= base;  
    }
    return hasil;
}

double hitungSigma(int n, int m, double c) {
    double total = 0;
    for (int i = 0; i <= n; i++) {
        total += pangkat(i, m) + c;  
    }
    return total;
}

int main() {
    int n, m;
    double c;

    cin >> n >> m >> c;

    double hasil = hitungSigma(n, m, c);

    cout << (int)hasil << endl;

    return 0;
}

