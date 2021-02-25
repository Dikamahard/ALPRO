/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 20 - 10 - 2020
Nama program : 
Deskripsi : 
*/

#include <iostream>
using namespace std;

void pangkat(int angka, int& hasil){
	hasil = angka * angka ;
	
}

int main() {
	int angka, hasil ;
	cout << "masukkan angka : " ; cin >> angka ;
	pangkat(angka, hasil) ;
	cout << hasil << endl ;
	
}