#include <iostream>
using namespace std;

/* while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
} */

int main(){
    int i;
    string arr_kata = [];
    string arr_kata2= [];
    cout << "Masukkan kata: " << endl;
    cin >> arr_kata;
    for (i=0; i<arr_kata; i++){
        arr_kata2[i]+=arr_kata[i-1];
    }
    cout << arr_kata2[];
}