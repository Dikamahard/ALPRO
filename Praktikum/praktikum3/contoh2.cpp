/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 27-9-2020
Nama program : 
Deskripsi : contoh 2 praktikum 3
*/

#include <iostream>
using namespace std;

int main() {
	char jawab;
	
	cout << "apakah anda yakin? (Y/N)" << endl ;
	cin >> jawab ;
	
	if (jawab == 'Y' || jawab == 'y'){
		cout << "anda yakin" ;
	}
	else {
		cout << "anda tidak yakin" ;
	}

}