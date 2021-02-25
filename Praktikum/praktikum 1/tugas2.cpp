/*
Nama Program: Program penghitung luas (tugas 2)
Nama : Rikzy Mahardika H
NPM : 140810200010
Tanggal : 9-9-2020
Deskripsi : Menghitung luas bangun datar
*/

#include <iostream>
using namespace std;

int main()
{
    
    float luas;
    const float pi = 3.14;
    int a, t, p, l, s, r, bentuk  ;

    cout << "apa yang ingin anda hitung?" << endl << "1. persegi" << endl << "2. persegi panjang" << endl 
    << "3. lingkaran" << endl << "4. segitiga" << endl << "pilih nomor 1/2/3/4" << endl ;

    cin >> bentuk;
    
    if (bentuk == 1) 
    {
        cout << "anda memilih persegi" << endl << "masukkan sisi : " ; cin >> s ;
        luas = s * s;
        cout << "luasnya adalah : " << luas ;
    }
     
    if (bentuk == 2) 
    {
        cout << "anda memilij persegi panjang" << endl << "masukkan panjang : " ; cin >> p  ;
        cout << "masukkan lebar : " ; cin >> l ;
        luas = p * l ;
        cout << "luasnya adalah : " << luas ; 
    }
    
    if (bentuk == 3)
    {
        cout << "anda memilih lingkaran" << endl << "masukkan jari2 : " ; cin >> r ;
        luas = pi * r * r ;
        cout << "luasnya adalah : " << luas ;
    }
    if (bentuk == 4)
    {
        cout << "anda memilih segitiga" << endl << "masukkan alas : " ; cin >> a ;
        cout << "masukkan tinggi : " ; cin >> t ;
        luas = a * t * 0.5 ;
        cout << "luasnya adalah : " << luas ;
    }
    
        

     
     


     
    
    
}
