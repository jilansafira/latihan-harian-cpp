/*
Nama Program : Jarak Titik Koordinat
Nama         : Jilan Safira
NPM          : 140810250070
Deskripsi    : Program untuk menghitung jarak antara dua titik koordinat dengan bantuan struct dan pointer
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point a, b;
    Point *pa = &a;
    Point *pb = &b;

    cin >> pa->x >> pa->y;
    cin >> pb->x >> pb->y;

    float distance = sqrt(pow(pb->x - pa->x, 2) + pow(pb->y - pa->y, 2));

    cout << fixed << setprecision(2) << distance << endl;

    return 0;
}