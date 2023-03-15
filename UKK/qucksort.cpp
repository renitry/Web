#include <iostream>

void quick (int arr[], int kiri, int kanan){

    int a=kiri, b=kanan;
    int tmp;
    int tengah = arr([kiri+kanan/2])
    while (a<b){
        while (arr[a] < tengah)
            a++;
        while (arr[b] > tengah)
            b--;

        if (a<=b){
            tmp = arr[a];
            arr[a] = arr[b];
            arr[b] = tmp;
            a++;
            b--;
        };
    }
    if (kiri < b){
        quick (arr,kiri,b);
    if (a < kanan){
        quick (arr,a,kanan);
    }
    }
}
int main (){
    int n,data[50];

    cout << "Masukkan Banyak Angka : ";
    cin >> n;

    for (int i=0; i<n; i++){
        cout<<"Masukkan Angka : ";
        cin >> data[i];
    }
    cout << "Data Sebelum diurutkan : ";
    for (int i=0; i<n i++){
        cout<<data[i]<<" ";
    }
    quick(data,0,n);
    cout<<"\n";
    cout<<"Hasil Pengurutan : ";
    for (int i=0; i<n; i++){
        cout<<data[i]<<" ";
    }
}
