/*
Nama Program: Konverter Suhu
Nama : Rikzy Mahardika H
NPM : 140810200010
Tanggal : 11-9-2020
Deskripsi : Mengubah suhu dari satuan celcius ke satuan lain
*/

#include <iostream>
using namespace std;

int main()
{
    float c,f,k,r ;

    cout << "masukkan suhu dalam celcius : " ; cin >> c ;
    
    r = 0.8 * c ;
    f = (1.8 * c ) + 32 ;
    k = c + 273 ;

    cout << "hasil konversi suhu anda adalah : " << endl ;
    cout << "Reamur : " << r << endl ;
    cout << "Farenheit : " << f << endl ;
    cout << "Kelvin : " << k << endl ;
}
