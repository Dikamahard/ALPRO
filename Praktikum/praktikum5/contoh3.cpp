/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 11-10-2020
Nama program : Contoh 3
Deskripsi : 
*/

#include <iostream>
using namespace std;

int main() {
	int f = 1, n, i ;
	
	cout << "masukkan bilangan integer positif : " ; cin >> n ;
	i = n ;
	do {
		f *= i ;
		i-- ;
		
	} while ( i>= 1) ;
	
	cout << n << " faktorial adalah " << f ;
	
	
}