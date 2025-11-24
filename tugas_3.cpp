/*
Nama Program : Balikkan Angkanya!
Nama         : Jilan Safira
NPM          : 140810250070
Tanggal Buat : 23/09/2025
Deskripsi    : Ridwan adalah seorang anak yang suka bermain dengan angka. Suatu hari, ia mendapat tantangan dari temannya untuk membuat sebuah program yang dapat melakukan hal berikut:
- Menerima dua bilangan bulat x dan y sebagai input
- Membalikkan urutan digit-digit A dan B, sehingga menjadi x′ dan y′
- Menjumlahkan x′ dan y′, sehingga menjadi z
- Membalikkan urutan digit-digit z, sehingga menjadi z′ 
- Mencetak z′ sebagai output */ 

#include <iostream>
using namespace std;

long long reverseNumber(long long n) {
    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    long long x, y;
    cin >> x >> y;

    long long x_rev = reverseNumber(x);
    long long y_rev = reverseNumber(y);
    long long z = x_rev + y_rev;
    long long z_rev = reverseNumber(z);

    cout << z_rev << endl;

    return 0;
}


