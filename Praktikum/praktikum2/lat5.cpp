/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 18-9-2020
Nama program : latihan 5 praktikum 2
Deskripsi : 
*/

#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3 ;
  
  cout << "masukkan angka pertama : " ; cin >> num1 ;
  cout << "masukkan angka kedua : " ; cin >> num2 ;
  cout << "masukkan angka ketiga : " ; cin >> num3 ;
  
  if (num1 > num2) {
	  if (num1 > num3){
		  cout << "angka pertama adalah yang paling besar" ;		
	  } 
  } else if (num2 > num3){
	  cout << "angka kedua adalah yang terbesar" ;
  } else {cout << "angka ketiga yang tebesar" ; }
}