/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 20-10-2020
Nama program : Tugas 3
Deskripsi : 
*/

#include <iostream>
using namespace std;

void sygma(int i, int& s, int n) {
	for (i=1 ; i <= n ; i++) {
		s += i ;
		cout << i ;
		if (i == n) {
			cout << " = " ;
		} else {
			cout << " + " ;
		}
	}
}

int main() {
	int i, s, n;
	
	cout << "masukkan angka : " ; cin >> n ;
	cout << "\nhasil sigma : " << endl ;
	s = 0 ;
	sygma(i, s, n);
	cout << s ;
	

	
}