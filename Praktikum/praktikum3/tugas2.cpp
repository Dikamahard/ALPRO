/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 27-9-2020
Nama program : tugas 2 praktikum 3
Deskripsi : memberi keterangan mengenai proses post pre incremenet dan decrement
*/

#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	a = 100 ;
	b = 30 ;
	
	b = ++a ; // 			(b = a)  (a = 101)
	b++ ; // 				(b = 101 + 1)
	c = (a--) + (++b) ; //  (a = 101 - 1)   (b = 103)  (c = 101 + 103)
	
	cout << "a = " << a << endl ;  // (a = 100)
	cout << "b = " << b << endl ;  // (b = 103)
	cout << "c = " << c << endl ;  // (c = 204)
	
}