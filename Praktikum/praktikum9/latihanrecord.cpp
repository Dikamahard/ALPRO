/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 12-11-2020
Nama program : latihan record
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
}

void print_point(koordinat& ttk){
	cout << "(" << ttk.absis << ", " << ttk.ordinat << ")";
}

int main() {
	koordinat a, b;
	
	cout << "Input titik a  \n"; get_point(a);
	cout << "\n Input titik b  \n"; get_point(b);
	cout << "\n Titik a : "; print_point(a);
	cout << "\n Titik b : "; print_point(b);
	
}

