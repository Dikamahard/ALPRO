/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 13-11-2020
Nama program : tugas 2
Deskripsi :
*/

#include <iostream>
using namespace std;

struct waktu{
	int jam;
	int menit;
	int detik;
	
};

void konvert_waktu(int s, waktu& x){
	int sisa;
	
	x.jam = s / 3600;
	sisa = s % 3600;
	x.menit = sisa / 60;
	sisa = sisa % 60;
	x.detik = sisa;
}

void print_waktu(waktu x){
	
	cout << x.jam << " jam\n"; 
	cout << x.menit << " menit\n"; 
	cout << x.detik << " detik";	
}

int main() {
	int det;
	waktu hasil;
	
	cout << "Masukkan detik : "; cin >> det;
	
	konvert_waktu(det, hasil);
	print_waktu(hasil);
	
}