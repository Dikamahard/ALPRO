/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 29-9-2020
Nama program : Program menentukan diskriminan
Deskripsi :  input 3 integer yang mewakili koefisien dari sebuah persamaan kuadrat, kemudian hitung diskriminan nya
*/

#include <iostream>
using namespace std ;

int main () {
	int a, b, c, D ;
	
	cout << "masukkan 3 buah bilangan bulat : " << endl ;
	cin >> a >> b >> c ;
	
	D = (b*b) - (4*a*c)  ;
	
	cout << endl << "diskriminan : " << endl << D << endl ;
	
}