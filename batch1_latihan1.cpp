#include <iostream>
using namespace std;

int main(){
    int baris, kolom, i, j;
    cout << "Masukkan baris: " << endl;
    cin >> baris;
    cout << "Masukkan kolom: " << endl;
    cin >> kolom;
    int matriks1 [baris][kolom];
    int matriks2 [baris][kolom];
    int matriks3 [baris][kolom];
    for (i=0; i<baris; i++){
        for (j=0; j<kolom; j++){
            cin >> matriks1[i][j];
        }
    }
    for (i=0; i<baris; i++){
        for (j=0; j<kolom; j++){
            cin >> matriks2[i][j];
        }
    }
    for (i=0; i<baris; i++){
        for (j=0; j<kolom; j++){
        matriks3[i][j]=matriks1[i][j]+matriks2[i][j];
        }   
    }
    cout << "\nHasil penjumlahan matriks:\n";
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            cout << matriks3[i][j] << " ";
        }
        cout << endl;
    }
    

}
