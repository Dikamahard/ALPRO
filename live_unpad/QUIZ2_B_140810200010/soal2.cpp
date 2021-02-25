/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 
Nama program : 
Deskripsi :
*/

#include <iostream>
using namespace std;

void tambah(int data[], int n){
    int jumlah;

    cout << "Masukkan jumlah : ";
    cin >> jumlah;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (data[i]+data[j] == jumlah){
                cout << "(" << data[i] << ", " << data[j] << ")";
            }
        }
    }
}

int main() {
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n, jumlah;

    n = sizeof(data)/4;
    cout << "output : " << endl;
    tambah(data, n);
}