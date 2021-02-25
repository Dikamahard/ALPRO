/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 30-9-2020
Nama program : Program manipulasi string
Deskripsi :  membuat program yang dapat memanipulasi string menggunakan beberapa fungsi string
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int num, total, tengah, kiri;
	string kata;
	
	cout << "masukkan kata : \n" ;
	cin >> kata ;
	cout << "masukkan angka : \n" ;
	cin >> num ;
	cout << endl << endl ;
	
	total = kata.length() ;
	tengah = total / 2;
	kiri = total - num ;
	
	cout << "kata yang dimasukkan : " << kata << endl ;
	cout << "panjang kata : " << total << endl ;
	cout << "huruf ke " << num << " : " << kata.substr(num - 1, 1) << endl ;
	cout << "huruf pertama dan terakhir : " << kata.substr(0,1) << " " << kata.substr(total - 1, 1) << endl ;
	cout << "huruf yang ditengah : " << kata.substr(tengah,1) << endl ;
	cout << "substring kiri sebanyak " << num << " : " << kata.substr(0,num) <<  endl;
	cout << "substring kanan sebanyak " << num << " : " << kata.substr(kiri,num) << endl ;
	
}