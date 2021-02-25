/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 
Nama program :
Deskripsi : 
*/

#include <iostream>
using namespace std;

int main() {
	int n, i, prima, j ;
	prima = 1 ;
	
	cout << "masukkan batasan bilangan prima : " ; cin >> n ;
	
	for (i=2 ; i <= n ; i++) {
		for (j=2 ; j < i ; j++) {
			if (i % j == 0) {
				prima = 0 ;
				break ;
			}
			
		}
		
		if (prima == 1) {
			cout << i << ", ";
			
		}
		prima = 1 ;
	}
	
}