/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 18-9-2020
Nama program : latihan 3 praktikum 2
Deskripsi : 
*/

#include <iostream>
using namespace std;

int main () {
	int angka;
	
	cout << "masukkan angka sembarang : " ; cin >> angka ;
	
	if (angka < 10) {
		cout << "angka lebih kecil dari 10" ;
	} else if (angka < 30) {
		cout << "angka lebih kecil dari 30" ;
	} else if (angka < 60) {
		cout << "angka lebih kecil dari 60" ;
	} else {cout << "angka anda salah" ; }
	
	
}