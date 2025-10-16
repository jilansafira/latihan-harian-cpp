/* 
Nama = Jilan Safira
NPM = 140810250070
Kelas = B
Program = Faktorial
Waktu Pengerjaam = 12 menit 32 detik
*/

#include <iostream>
using namespace std;

    int faktorial (int x){
        if (x==0){
            return 1;
        }
        else{
        return x*faktorial(x-1);
    }
}

int main(){
    int y;
    cout << "Masukkan angka!\n";
    cin >> y;
    cout << "Faktorial dari " << y << " adalah " << faktorial(y);
}