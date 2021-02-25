/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 20-10-2020
Nama program :
Deskripsi :
*/

#include <iostream>
using namespace std;

void pattern_segitiga_siku(int j, int i, int n) {
	
	for (i=1 ; i <= n ; i++) {
		for (j=1 ; j <= i ; j++) {
			cout << "*" ;
		}
		cout << endl ;
	}
}

void pattern_segitiga_terbalik(int j, int i, int n) {
	
	for (i=n ; i >= 1 ; i--) {
		for (int k=n-i ; k>0 ; k--) {
			cout << " " ;
		}
		for (j=i ; j>0 ; j--) {
			cout << "*" ;
		}
		cout << endl ;
			
	}
}

void pattern_x(int j, int i, int n) {
	
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

int main() {
	int i, j, n;
	
	cout << "masukkan angka : " ; cin >> n ;
	cout << "pattern segitiga siku2 : " << endl << endl ;
	pattern_segitiga_siku(j, i, n);
	cout << "pattern segitiga terbalik : " << endl << endl ;
	pattern_segitiga_terbalik(j, i, n);
	cout << "pattern x : " << endl << endl ;
	pattern_x(j, i, n);
	
}


