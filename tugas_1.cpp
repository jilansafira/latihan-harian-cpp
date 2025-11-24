/*
Nama Program : convertTemperature
Nama         : Jilan Safira
NPM          : 140810250070
Tanggal Buat : 23/09/2025
Deskripsi    : Buatlah program dengan tiga fungsi: 
- toCelsius(double f) untuk mengubah Fahrenheit ke Celsius
- toFahrenheit(double c) untuk mengubah Celsius ke Fahrenheit
- toKelvin(double c) untuk mengubah Celsius ke Kelvin
Program membaca sebuah bilangan real dan sebuah karakter yang menunjukkan jenis input suhu (C atau F). Lalu, program mencetak hasil konversi ke dua satuan lainnya. */

#include <iostream>
using namespace std;

double toCelcius(double F) {
    return (F - 32) * 5.0 / 9.0;
}

double toFahrenheit(double C) {
    return (C * 9.0 / 5.0) + 32;
}

double toKelvin(double C) {
    return C + 273.15;
}

int main() {
    double suhu;
    char unit;

    cin >> suhu;
    cin >> unit;

    if (unit == 'C' || unit == 'c') {
        double F = toFahrenheit(suhu);
        double K = toKelvin(suhu);

        cout << "Fahrenheit: " << F << endl;
        cout << "Kelvin: " << K << endl;
    }
    else if (unit == 'F' || unit == 'f') {
        double C = toCelcius(suhu);
        double K = toKelvin(C);

        cout << "Celsius: " << C << endl;   
        cout << "Kelvin: " << K << endl;
    }
    else if (unit == 'K' || unit == 'k') {
        double C = suhu - 273.15;
        double F = toFahrenheit(C);

        cout << "Celsius: " << C << endl;
        cout << "Fahrenheit: " << F << endl;
    }
    else {
        cout << "Unit tidak dikenali!" << endl;
    }
}
