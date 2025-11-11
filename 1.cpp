/* Panji lupa mengerjakan tugas Algoritma dan pemrograman. dia menyelesaikan tugasnya dan menyusul Asprak Rizki yang hendak pulang menggunakan bus.
rizki dan panji semula berada di ppbs d yang berjarak 1000m dari halte bus.
rizki berjalan dengan kecepatan 2 meter per detik, dan panji perlu menyelesaikan tugasnya selama s detik lalu mengumpulkan tugasnya ke rizki dengan menggunakan motor yang berkecepatan 40 meter per detik.
tentukan apakah panji berhasil mengumpulkan tugasnya hari ini atau tidak! */

#include <iostream>
using namespace std;

int main(){
    int n, total_waktu, jarak_panji, jarak_rizki;
    bool hasil= false;
    cin >> n;
    total_waktu = n;
    jarak_rizki = n*2;
    jarak_panji = 0;
    if (jarak_rizki>=1000){
        cout << "Panji gagal menyusul asprak Rizki";  
        return 0;
    }
        
    else{      
        while (jarak_panji<jarak_rizki){
            jarak_rizki+= 2; 
            jarak_panji+= 40;
            total_waktu +=1;
            if(jarak_rizki>1000 && jarak_panji<1000){
                hasil = true;
            }
        }

        }

if (hasil==false){
    cout << "panji mengumpulkan tugas di detik ke: " << total_waktu << "\n" << "Panji berhasil menyusul asprak Rizki";

}
else{
    cout << "Panji gagal menyusul asprak Rizki";  

}
}