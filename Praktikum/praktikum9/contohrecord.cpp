/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 12-11-2020
Nama program : contoh record
Deskripsi :
*/

#include <iostream>
using namespace std;

struct ktp{
	int nik;
	char nama[100];
	int tahun_lahir;
};

int main() {
	ktp ktp_orang;
	
	cout << "NIK : "; cin >> ktp_orang.nik;
	cout << "Nama : "; cin >> ktp_orang.nama;
	cout << "Tahun Lahir : "; cin >> ktp_orang.tahun_lahir;
	
	cout << "NIK : " << ktp_orang.nik << endl;
	cout << "Nama : " << ktp_orang.nama << endl;
	cout << "Tahun Lahir : " << ktp_orang.tahun_lahir<< endl;

}