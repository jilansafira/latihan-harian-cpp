/*
Nama Program : Salin string
Nama         : Jilan Safira
NPM          : 140810250070
Deskripsi    : Program untuk menyalin string ke variabel lain menggunakan bantuan pointer
*/

#include <iostream>
using namespace std;

int main(){
    char text1 [100];
    char text2 [100];

    cin.getline(text1, 100);

    char *p1 = text1;
    char *p2 = text2;

    while (*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    
    *p2 = '\0';

    cout << text2 << endl;

    return 0;
}