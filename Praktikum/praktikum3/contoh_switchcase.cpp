/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 27-9-2020
Nama program : 
Deskripsi : contoh switch case praktikum 3
*/

#include <iostream>
using namespace std;

int main() {
	int angka ;
	
	cout << "masukkan angka : " ;
	cin >> angka ;
	
	switch (angka) {
		case 0 : 
		cout << "angka nol" ;
		break ;
		case 1 : 
		cout << "angka satu" ;
		break ;
		case 2 : 
		cout << "angka dua" ;
		break ;
		default : 
		cout << "selain angka 0, 1, 2" ;
		break ;
		
	}
}