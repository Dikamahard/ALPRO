/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 11-10-2020
Nama program : Tugas 1
Deskripsi : 
*/

#include <iostream>
using namespace std;

int main() {
	int i, j, n;
	
	cout << "masukkan angka : " ; cin >> n ;
	
	for (i=1 ; i <= n ; i++) {
		for (j=1 ; j <= i ; j++) {
			cout << "*" ;
		}
		cout << endl ;
	}
	
	cout << endl << endl ;
	
	for (i=n ; i >= 1 ; i--) {
		for (int k=n-i ; k>0 ; k--) {
			cout << " " ;
		}
		for (j=i ; j>0 ; j--) {
			cout << "*" ;
		}
		cout << endl ;
			
	}
	
	cout << endl << endl ;
	
	for(i=1; i <= n; i++){
		for(j=1; j <= n ; j++){
			if (i == j || i+j == n+1)
				{cout << "*";}
			else
				{cout<< " ";}
			}
		cout << endl;
	}
}
	
	
	
	
	
	
	
	
	
