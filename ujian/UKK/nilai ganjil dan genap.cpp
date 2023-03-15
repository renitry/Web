#include <iostream>
using namespace std;

int main(){
    // deklarasi variabel
    int bil;

    cout << "Masukan Bilangan : ";
    cin>>bil;
    cout<<endl;

    if(bil%2==0){
        cout << "Bilangan Genap";
    }else {
        cout << "Bilangan Ganjil";
    }

}
