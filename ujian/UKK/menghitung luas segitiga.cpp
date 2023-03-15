#include <iostream>
using namespace std;

int main(){
    float luas;
    int tinggi,alas;

    cout <<"Masukan Alas : ";
    cin>>alas;
    cout <<"Masukan Tinggi : ";
    cin >>tinggi;
    cout << endl;

    luas=0.5*alas*tinggi;
    cout << "Luas Segitiga = "<<luas<<endl;

    return 0;

}
