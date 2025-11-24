/*
Nama Program : Latihan
Nama         : Jilan Safira
NPM          : 140810250070
Tanggal Buat : 17/09/2025
Deskripsi    : Zahra adalah seorang pegawai yang bekerja di sebuah pabrik. Ia ingin membuat program yang dapat menghitung waktu pulangnya setiap hari dengan menginput jam dan menit saat ia mulai bekerja. Ia tahu bahwa ia harus menambahkan 8 jam 30 menit ke jam dan menit yang ia input.

Bantulah Zahra untuk membuat program tersebut dengan menggunakan fungsi void yang menerima dua parameter, jam dan menit, dengan tipe data int dan metode pass by reference untuk mengubah nilai variabel yang diberikan.
*/

#include <iostream>
using namespace std;

void tambahWaktu(int &h, int &m) {
    m += 30;
    h += 8;

    if (m >= 60) {
        m -= 60;
        h += 1;
    }
}

int main() {
    int h, m;
    cin >> h >> m;

    tambahWaktu(h, m);

    cout << h << " " << m << endl;

    return 0;
}