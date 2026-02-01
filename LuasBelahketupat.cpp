#include <iostream>
using namespace std;

int main10() {
    float d1, d2, luas;
    cout << "Masukkan diagonal 1 dan 2: ";
    cin >> d1 >> d2;
    luas = 0.5 * d1 * d2;
    cout << "Luas belah ketupat = " << luas << endl;
    return 0;
}