#include <iostream>
#define PI 3.14159
using namespace std;

int main15() {
    float r, keliling;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    keliling = 2 * PI * r;
    cout << "Keliling lingkaran = " << keliling << endl;
    return 0;
}