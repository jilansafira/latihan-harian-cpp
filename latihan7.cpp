/*
Nama Program : Indeks String
Nama         : Jilan Safira
NPM          : 140810250070
Deskripsi    : Program untuk mencari indeks suatu karakter pada string menggunakan bantuan pointer
*/

#include <iostream>
using namespace std;

int main() {
    char text[101];
    char c;

    cin.getline(text, 101);
    cin >> c;

    int found = 0;
    char *ptr = text;
    int index = 0;

    while (*ptr != '\0') {
        if (*ptr == c) {
            cout << index << " ";
            found = 1;
        }
        ptr++;
        index++;
    }

    if (!found) {
        cout << -1;
    }

    cout << endl;
    return 0;
}