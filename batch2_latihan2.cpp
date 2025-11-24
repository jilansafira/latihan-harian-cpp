#include <iostream>
using namespace std;

int main() {
    int i;
    int urutan=0;
    string kalimat;
    getline(cin, kalimat);
    for (i=0; i<kalimat.length(); i++){
        if ((int)kalimat[i]==32){
            urutan=i;
       } 
    }
    cout << (kalimat.length()-1)-urutan;
}