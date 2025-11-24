/*
Nama Program : weirdMultiply
Nama         : Jilan Safira
NPM          : 140810250070
Tanggal Buat : 23/09/2025
Deskripsi    : Buatlah fungsi weirdMultiply(int a, int b) yang mengembalikan hasil perkalian dua bilangan bulat dengan aturan:
- Jika salah satu bilangan negatif → hasil dikali 2
- Jika keduanya positif → hasil dikurangi 3
- Program membaca dua bilangan bulat, lalu mencetak hasil weirdMultiply. */

#include <iostream>
using namespace std;

int weirdMultiply (int a, int b){
    int hasil = a * b;

    if  (a < 0 || b < 0){
        hasil *= 2;
    }
    else {
        hasil -= 3;
    }
    return hasil;
}

int main (){
    int a;
    int b;

    cin >> a >> b;

    cout << weirdMultiply(a,b) << endl;
}
