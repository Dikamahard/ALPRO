/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 9-12-2020
Nama program : UAS
Deskripsi :
*/

#include <iostream>
using namespace std;


struct formasi{
    string nama;
    int tinggi;
};

void input(formasi& x, int n){
    cout << "Nama      : "; cin >> x.nama;
    cout << "Tinggi    : "; cin >> x.tinggi;
    cout << endl;
    }


void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}


void sort(int x[], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (x[j]>x[j+1]){
                swap(x[j], x[j+1]);
            }
        }
    }
}
void urutan(formasi x[], int n){    
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (x[j].tinggi < x[j+1].tinggi){
                swap(x[j].tinggi, x[j+1].tinggi);
                swap(x[j].nama, x[j+1].nama);
            }
        }
    }
   
}

void barisan(formasi b[], int jum){
    
    cout << "\nUrutan formasi Berdasar tinggi : \n";
    int x=0;
    for(int i=0;i<2;i++){
       for (int j=0; j<5; j++){
          cout << b[x].nama << b[x].tinggi << "\t" ;
          x++;
       }
       cout << endl;
    }
}

void BanyakSiswa(int& x){
    cout << "Jumlah Siswa : "; cin >> x;
}


int main() {
    formasi siswa[10];
    //matrix baris;
    int n;

    BanyakSiswa(n);

    cout << "Input Data \n";
    for(int i=0; i < n ; i++){
    input(siswa[i],n);
    }
    cout << "Output Data \n";
    urutan(siswa,n);
    barisan(siswa,n);

}
