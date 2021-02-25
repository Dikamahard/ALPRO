/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 29-9-2020
Nama program : Program penghitung hambatan total
Deskripsi : menghitung total dari 3 buah hambatan dalam bentuk seri ddan paralel
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float r1, r2, r3 ;
	float seri, paralel ;
	
	cout << "masukkan 3 hambatan dalam satuan ohm : " << endl ;
	cin >> r1 ; cin >> r2 ; cin >> r3 ;
	
	seri = r1 + r2 + r3 ;
	paralel = 1 / ( (1/r1) + (1/r2) + (1/r3) ) ;  
	
	cout << "seri : "  << fixed << setprecision(2) << seri << endl; 
	cout << "parallel : "  << fixed <<setprecision(2) << paralel ;
	
	
}
