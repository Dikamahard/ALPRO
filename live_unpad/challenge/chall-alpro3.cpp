/*
Nama Program: program menghitung rata2 3 bilangan
Nama : Rikzy Mahardika H
NPM : 140810200010
Tanggal : 16-9-2020
Deskripsi : Membuat program yg dapat menghitung rata2 dari input 3 bilangan dengan output hasil rata2
*/

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, rata ;

    cout << "masukkan angka pertama : " ; cin >> num1 ;
    cout << "masukkan angka kedua : " ; cin >> num2 ; 
    cout << "masukkan angka ketiga : " ; cin >> num3 ;

    rata = (num1 + num2 + num3) / 3 ;

    cout << "hasil rata-rata nya adalah : " << rata ; 
}
