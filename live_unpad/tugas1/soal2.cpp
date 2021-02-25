/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 29-9-2020
Nama program : Program kalkulator sederhana
Deskripsi :  menginput 2 buah integer dan menghitungnya menggunakan perkalian, pertambahan, pengurangan, pembagian bulat dan sisa dari pembagian
*/

#include <iostream>
using namespace std;

int main() {
	int a,b ;
	int kali, bagi, sisa, tambah, kurang ;
	
	cout << "masukkan 2 buah bilangan bulat : " << endl ;
	cin >> a ; cin >> b ;
	
	kali = a * b ;
	bagi = a / b ;
	sisa = a % b ;
	tambah = a + b ;
	kurang = a - b ;
	
	cout << endl << "berikut adalah hasil penghitungannya : " << endl << endl ;
	cout << a <<" X " << b << " = " << kali << endl ;
	cout << a <<" div " << b << " = " << bagi << endl ;
	cout << a <<" mod " << b << " = " << sisa << endl ;
	cout << a <<" + " << b << " = " << tambah << endl ;
	cout << a <<" - " << b << " = " << kurang << endl ;
	
	
	
}