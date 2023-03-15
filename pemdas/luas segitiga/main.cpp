#include <iostream>

using namespace std;

int main()
{
    float luas;
    int t,a;

    cout << "Masukkan Alas : ";
    cin >> a;
    cout << "Masukkan Tinggi : ";
    cin >> t;
    cout << endl;

    luas=0.5*a*t;
    cout << "Luas Segitiga = "<<luas<<endl;

    return 0;
}
