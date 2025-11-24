#include <iostream>
using namespace std;

int main() {
    int n, i, ascii;
    string kata;
    getline(cin, kata);
    cin >> n;
    for (i=0; i<kata.length(); i++){
        if ((int)kata[i]==32){
            cout << kata[i];
        }
        else if ((int)kata[i]>=65 || (int)kata[i]<=90){
            cout << char(((int)kata[i])+n);
        }
    
    }
}