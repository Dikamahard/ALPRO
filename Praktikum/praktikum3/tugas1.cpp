/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 27-9-2020
Nama program : tugas 1 praktikum 3
Deskripsi : menampilkan menu makanan, kemuidan user menginput makanan beserta jumlah, ouput nya adalah makanan dengan jumlahnya
*/

#include <iostream>
using namespace std;


int main(){
	int menu, porsi;
	string makan;
	
	cout << endl << "Menu Makanan : " << endl << endl << "1. Nasi Goreng" << endl << "2. Mie Goreng" << endl << "3. Kwetiauw Goreng" << endl << "4. Kerupuk" << endl;
	
	
	cout << endl << "pilih menu : " ; cin >> menu ;
	
	switch (menu){
		case 1 : makan = "Nasi Goreng" ;
		break;
		case 2 : makan = "Mie Goreng" ;
		break;
		case 3 : makan = "Kwetiauw Goreng" ;
		break;
		case 4 : makan = "Kerupuk" ;
		break;
		default : makan = "Maaf menu yang anda masukkan salah";
		break;
		
	}
	
	cout << "berapa banyak : " ; cin >> porsi ;
	cout << makan << " sebanyak " << porsi << " porsi";
	
}
