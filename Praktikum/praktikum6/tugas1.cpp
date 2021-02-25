/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 11-10-2020
Nama program : tugas 1
Deskripsi :
*/

#include <iostream>
using namespace std;


void kubus (float& v, float s) { 

	v = s * s * s ;
}

void kerucut (float& v, float t, float La ) {

	v = (La * t)/3	;
}

void bola (float& v, float r) {

	v = (4 * 3,14 * r * r * r) / 3 ; 
}

void silinder (float& v, float r, float t) {

	v = 3,14 * r * r * t ;
}


int main() {
	float v, s, t, La, r ;
	int pil, tes = 1 ;
	
	while (tes == 1)  {
	
	cout << endl << "Program Menghitung Volume" << endl;
	cout << "Pilih bangun apa yang ingin dihitung : " << endl ;
	cout << "1. Kubus " << endl ;
	cout << "2. Kerucut " << endl ;
	cout << "3. Bola " << endl ;
	cout << "4. Silinder " << endl ;
	cout << "5. Selesai " << endl ;
	cout << endl  ;
	
	cin >> pil ;
	
		
	switch(pil) {
		case 1 : 
		cout << "masukkan panjang rusuk : " ; cin >> s ;
		kubus(v, s) ;
		cout << "volume : " << v << endl ;
		break;
		
		case 2 :
		cout << "masukkan tinggi : " ; cin >> t ;
		cout << "masukkan luas alas : " ; cin >> La ;
		kerucut(v, t, La) ;
		cout << "volume : " << v << endl << endl ;
		break ;
		
		case 3 :
		cout << "masukkan jari2 : " ; cin >> r ;
		bola(v, r) ;
		cout << "volume : " << v << endl << endl ;
		break ;
		
		case 4 :
		cout << "masukkan jari2 : " ; cin >> r ;
		cout << "masukkan tinggi : " ; cin >> t ;
		silinder(v, r, t) ;
		cout << "volume : " << v << endl << endl ;
		break ;
		
		case 5 :
		tes = 0 ;
		break ;
		
	} 
	} 
	
	
	
	
	
	
}