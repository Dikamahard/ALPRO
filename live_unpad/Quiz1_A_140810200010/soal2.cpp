/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 15-10-2020
Nama program : 
Deskripsi :  
*/

#include <iostream>
using namespace std;

int main() {
	string kata, hasil;
	int n;
	
	cout << "masukkan kata : " ; getline(cin, kata);
	
	hasil = " YA " ;
	n = kata.length() ;
	
	for (int i=0; i<n; i++) {
		if (kata[i] != kata[n-i-1]) {
			hasil = " BUKAN " ;
			break;
		}
		
	}
	cout << hasil;
	
	
	
}