/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 18-9-2020
Nama program : latihan 4 praktikum 2
Deskripsi : 
*/

#include <iostream>
using namespace std;

int main() {
	int angka ;
	
	cout << "masukkan angka sembarang : " ; cin >> angka ;
	if (angka >= 1) {
		if (angka <= 10) {
			cout << "angka berada dalama rentang 1-10" ;
		} else {
			cout << "angka lebih dari 10" ;
		}
	} else {
		cout << "input salah / angka kurang dari 1" ;
	}
}