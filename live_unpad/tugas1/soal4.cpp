/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 29-9-2020
Nama program : Program konversi suhu 
Deskripsi :  mengonversi suhu dari celcius ke dalam satuan lainnya
*/

#include <iostream>
using namespace std ;

int main () {
	float c, r, f, k ;
	char x ;
	
	cout << "masukkan suhu dalam satuan celcius" << endl ; 
	cin >> c ;
	cout << "konversikan ke satuan apa (R / F / K) " << endl ;
	cin >> x ;
	cout << endl ;
	
	r = 0.8 * c ;
	f = (1.8 * c) + 32 ;
	k = 273.15 + c ;
	
	switch (x) {
		case 'R' :
		cout << "hasil konversi dari " << c << " derajat celcius ke dalam satuan reamur adalah : " << r ;
		break;
		
		case 'F' :
		cout << "hasil konversi dari " << c << " derajat celcius ke dalam satuan farenheit adalah : " << f ;
		break;
		
		case 'K' :
		cout << "hasil konversi dari " << c << " derajat celcius ke dalam satuan kelvin adalah : " << k ;
		break;
		
		default : 
		cout << "anda tidak menggunakan huruf kapital atau inputan anda salah" ;
		break;
	}
	
	
	
	
}