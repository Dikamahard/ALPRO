/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 12-11-2020
Nama program : contoh array of record
Deskripsi :
*/

#include <iostream>
using namespace std;

struct KTP{
	int nik;
	char name[10];
	char ttl[10];
	
};

int main() {
	KTP ktp[10];
	
	cout << "NIK \t: "; cin >> ktp[0].nik;
	cout << "Name\t: "; cin >> ktp[0].name;
	cout << "Tempat tanggal lahir\t : "; cin >> ktp[0].ttl;
	
	cout << "\nNIK\t: " << ktp[0].nik;
	cout << "\nName\t: " << ktp[0].name;
	cout << "\nTempat tanggal lahir\t: " << ktp[0].ttl << endl;
}