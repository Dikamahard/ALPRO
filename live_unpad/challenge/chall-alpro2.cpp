/*
Nama Program: program menghitung tegangan
Nama : Rikzy Mahardika H
NPM : 140810200010
Tanggal : 11-9-2020
Deskripsi : Membuat program yg dapat menghitung tegangan listrik dengan input arus dan hambatan
*/
#include <iostream>
using namespace std;

int main()
{

float I,v,R ;

cout << "masukkan arus listrik : " ; cin >> I ;
cout << "masukkan hambatan listrik : " ; cin >> R ;

v = I * R;

cout << "tegangan listrik yang dihasilkan adalah : " << v ;

}
