/*
Nama Program: Kalkulator Simple (tugas 1)
Nama : Rikzy Mahardika H
NPM : 140810200010
Tanggal : 9-9-2020
Deskripsi : Membuat kalkulator sederhana menggunakan operasi aritmatika
*/

#include <iostream>
using namespace std;

int main()
{
    float angka1, angka2, kali, bagi, tambah, kurang ;

    
    cout << "masukkan angka pertama : " ;
    cin >> angka1 ;
    cout << "masukkan angka kedua : " ;
    cin >> angka2 ;

    kali = angka1 * angka2 ;
    bagi = angka1 / angka2 ;
    tambah = angka1 + angka2 ;
    kurang = angka1 - angka2 ;

    cout << "hasillnya = " << endl << "perkalian : " << kali << endl << 
    "pembagian : " << bagi << endl ;
    cout << "penjumlahan : " << tambah << endl << "perngurangan : " << kurang << endl ;  
}