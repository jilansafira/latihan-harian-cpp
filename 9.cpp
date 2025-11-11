#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream contoh;
    contoh.open("contoh.txt");
    int geser;
    string arah, baru;
    char ch;
    cout << "Masukkan jumlah pergeseran" << endl;
    cin >> geser;
    cout << "Tentukan arah pergeseran";
    cin >> arah;
    if (contoh.fail()) {
        cout << "File tidak bisa dibuka";
    }
    else{
        while (contoh.get(ch)){
            if (arah=="kanan"){
                if ((int(ch)>=65 && int(ch)<=90)||(int(ch)>=97 && int(ch)<=122)){
                    baru+=char((int(ch)+geser));
                }
                else{
                    baru+=ch;
                }
            }
            else if(arah=="kiri"){
                if ((int(ch)>=65 && int(ch)<=90)||(int(ch)>=97 && int(ch)<=122)){
                    baru+=char((int(ch)-geser));
            }
                else{
                    baru+=ch;
                }
        }
    }
}
    cout << baru;
}