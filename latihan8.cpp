/*
Nama Program : Menukar Bilangan Integer
Nama         : Jilan Safira
NPM          : 140810250070
Deskripsi    : Program untuk mengurut integer dalam bentuk ascending
*/

#include <iostream>
using namespace std;

void tukar (int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;
    cin >> a >> b;

    if (a > b){
        tukar (&a, &b);
    }

    cout << a << " " << b << endl;

    return 0;
}