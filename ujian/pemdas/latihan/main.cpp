#include <iostream>

using namespace std;

int main()
{
    int alas,tinggi,luas;

    cout << "Menghitung luas segitiga\n\n";

    cout << "Masukkan alas : ";
    cin >> alas;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;

    luas = 0.5*alas*tinggi;

    cout << "Luas segitiga adalah " << luas;
    return 0;
}
