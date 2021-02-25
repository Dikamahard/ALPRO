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
	int A, B, N, K, jumlah, hasil ;
	
	hasil = 0 ;
	
	cout << "masukkan N : " ; cin >> N ;
	cout << "masukkan K : " ; cin >> K ;
	
	for (A=1; A <= N; A++) {
		for (B=1 ; B<=A; B++) {
			jumlah = A + B ;
			if (jumlah % K == 0 && A != B) {
				hasil += 1;
			}
		}
		
	}
	
	cout << hasil ;
	
	
	
}