#include<iostream>
using namespace std;

int main()
{
    int luas;
    int panjang;
    int lebar;
    
    cout << "Masukan nilai panjang : ";
    cin >> panjang;
    
    cout << "Masukan nilai lebar : ";
    cin >> lebar;
    
    luas = panjang*lebar;
    cout << "Luas persegi panjang anda : "<< luas << endl;
    return 0;
}