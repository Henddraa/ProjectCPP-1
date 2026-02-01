#include<iostream>
using namespace std;

int main()
{
    int luas;
    int alas, tinggi;
    
    cout << "Masukan nilai alas: ";
    cin >> alas;
    
    cout << "Masukan nilai tinggi: ";
    cin >> tinggi;
    
    luas = alas*tinggi;
    cout << "Luas jajar genjang anda : "<< luas << endl;
    return 0;
}