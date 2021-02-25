/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 12-11-2020
Nama program : latihan array of record
Deskripsi :
*/

#include <iostream>
using namespace std;

struct data{
	string nama;
	string npm;
	int nilai;
	
};

void input_data(data& a, int i/*, data b, data c*/){
	cout << "\nMahasiswa ke " << i+1 << endl;
	cout << "Masukkan nama mahasiswa : "; cin >> a.nama;
	cout << "Masukkan NPM mahasiswa : "; cin >> a.npm;
	cout << "Masukkan nilai mahasiswa : "; cin >> a.nilai;
	cout << endl;
}

void print_data(data a){
	cout << "Nama : " << a.nama << endl;
	cout << "NPM  : " << a.npm << endl;
	cout << "Nilai: " << a.nilai << endl << endl;
	
}

int main() {
	data mhs[20];
	
	cout << "Input data : " << endl;
	
	for (int i=0; i<20; i++){
		input_data(mhs[i], i);
	}
	
	cout << "\nHasil data inputan : " << endl << endl;
	
	for (int i=0; i<20; i++){
		print_data(mhs[i]);
	}
	
	
}





