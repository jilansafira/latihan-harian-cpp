#include <iostream>
using namespace std;

int main(){
    int n, i;
    cout << "Masukkan jumlah elemen: " << endl;
    cin >> n;
    
    int angka[n];
    
    for (i = 0; i < n; i++){
        cout << "Masukkan elemen ke-" << i + 1 << " : ";
        cin >> angka[i];
    }

    cout << endl;
    for (i = 0; i < n; i++){
        bool sudahAda = false;
        for (int j = 0; j < i; j++){
            if (angka[i] == angka[j]){
                sudahAda = true;
                break;
            }
        }

        if (!sudahAda){
            int jumlah = 0;
            for (int j = 0; j < n; j++){
                if (angka[i] == angka[j]){
                    jumlah++;
                }
            }
            cout << "Angka " << angka[i] << " muncul " << jumlah << " kali" << endl;
        }
    }

    return 0;
}
