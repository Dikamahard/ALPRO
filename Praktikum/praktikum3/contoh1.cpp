/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 27-9-2020
Nama program : 
Deskripsi : contoh 1 praktikum 3
*/

#include <iostream>
using namespace std;

int main() {
	int angka;
	cout << "masukkan angka : " ;
	cin >> angka ;
	
	if (angka == 2 || angka == 3){
		cout << "angka merupakan angka 2 atau 3" ;
	}
	
	if (angka % 2 == 0 && angka % 3 == 0){
		cout << "angka habis dibagi 6" ;
	}


}