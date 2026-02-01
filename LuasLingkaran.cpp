#include <iostream>
#define PI 3.14159
using namespace std;

int main16() {
    float r, luas;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    luas = PI * r * r;
    cout << "Luas lingkaran = " << luas << endl;
    return 0;
}