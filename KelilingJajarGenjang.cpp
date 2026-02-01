#include<iostream>
using namespace std;

int main()
{
    int keliling;
    int sisi1, sisi2, sisi3, sisi4 ;
    
    
    cout << "Masukan nilai sisi 1 : ";
    cin >> sisi1;
    
    cout << "Masukan nilai sisi 2 : ";
    cin >> sisi2;
    
    cout << "Masukan nilai sisi 3 : ";
    cin >> sisi3;
    
    cout << "Masukan nilai sisi 4 : ";
    cin >> sisi4;

    keliling = sisi1 + sisi2 + sisi3 + sisi4;
    
    cout << "Keliling jajar genjang anda : " << keliling << endl;
    
    return 0;
}