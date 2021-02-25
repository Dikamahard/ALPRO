/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 17-12-2020
Nama program :
Deskripsi : UAS
*/

#include <iostream>
using namespace std;

typedef int matriks[10][10];

void diagonal(matriks x, int a, int b, int& jumlaha, int& jumlahb){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if( i == j ){
                jumlaha += x[i][j];
            }
        }
    }
    cout << "Jumlah diagonal kiri ke kanan \n"<< jumlaha<<endl;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            jumlahb = x[2][0] + x[1][1] + x[0][2];
        }
    }
    cout << "Jumlah diagonal kanan ke kiri \n"<< jumlahb<<endl;
}


void diagonalDifference(matriks x, int jumlah1, int jumlah2, int selisih){
    selisih = jumlah1 - jumlah2; 
    if (selisih < 0){
        selisih = jumlah2 - jumlah1;
        cout << "Hasil mutlaknya  : "<< selisih;
    } else{
        cout << "Hasil mutlaknya  : "<< selisih;
    }
}

int main(){
    matriks x;
    int baris,kolom,jumlahA,jumlahB,selisih;
    cout << "Masukkan Banyak Baris : "; cin >> baris;
    cout << "Masukkan Banyak Kolom : "; cin >> kolom;
    
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << "Baris " << i+1 << ", Kolom " << j+1 << " = ";
            cin >> x[i][j];
        }
    }
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << x[i][j] << "\t";
        }
        cout<<endl;
    }
    diagonal(x,baris,kolom,jumlahA, jumlahB);
    diagonalDifference(x,jumlahA,jumlahB,selisih);
}