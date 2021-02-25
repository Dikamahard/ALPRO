/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 13-11-2020
Nama program : tugas 1
Deskripsi :
*/


#include <iostream>
using namespace std;

struct koordinat{
	float absis;
	float ordinat;
};

void get_point(koordinat& ttk){
	cout << "Masukkan Absis : "; cin >> ttk.absis;
	cout << "Masukkan Ordinat : "; cin >> ttk.ordinat;
	cout << endl;
}

void print_point(koordinat& ttk){
	cout << "(" << ttk.absis << ", " << ttk.ordinat << ")";
	cout << endl;
}

void cari_t(koordinat a, koordinat b, koordinat& x){
	x.absis = b.absis - a.absis;
	x.ordinat = b.ordinat - a.ordinat;
}

void cari_c(koordinat a, koordinat& x){
	x.absis = a.absis;
	x.ordinat = a.ordinat - (2 * a.ordinat);
	
}

void cari_d(koordinat a, koordinat& x){
	x.absis = a.absis - (2 * a.absis);
	x.ordinat = a.ordinat;
	
}

int main() {
	koordinat A, B, T, C, D;
	
	cout << "Titik A \n";
	get_point(A);
	
	cout << "Titik B \n";
	get_point(B);
	
	cari_t(A, B, T);
	cari_c(A, C);
	cari_d(A, D);
	
	cout << "Titik A \n";
	print_point(A);
	
	cout << "\nTitik B \n";
	print_point(B);
	
	cout << "\nTitik Tengah \n";
	print_point(T);
	
	cout << "\nTitik C \n";
	print_point(C);
	
	cout << "\nTitik D \n";
	print_point(D);
	
	
	
}










