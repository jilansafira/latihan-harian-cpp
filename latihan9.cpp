/*
Nama Program : Pembalik Array
Nama         : Jilan Safira
NPM          : 140810250070
Deskripsi    : Program untuk membalik urutan elemen pada sebuah array dengan bantuan pointer.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *ptrStart = arr;
    int *ptrEnd = arr + n - 1;

    while (ptrStart < ptrEnd) {
        int temp = *ptrStart;
        *ptrStart = *ptrEnd;
        *ptrEnd = temp;
        ptrStart++;
        ptrEnd--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}