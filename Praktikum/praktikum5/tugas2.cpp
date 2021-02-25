/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 11-10-2020
Nama program : Tugas 2
Deskripsi : 
*/

#include <iostream>
using namespace std;

int main() {
	int n, s, i ;
	
	cout << "masukkan angka : " ; cin >> n ;
	cout << "\nhasil sigma : " << endl ;
	
	s = 0 ;
	
	for (i=1 ; i <= n ; i++) {
		s += i ;
		cout << i ;
		if (i == n) {
			cout << " = " ;
		} else {
			cout << " + " ;
		}
	}
	
	cout << s ;
	
	
}