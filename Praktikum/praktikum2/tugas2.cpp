/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 20-9-2020
Nama program : tugas 1 praktikum 2
Deskripsi : menentukan jenis akar dan nilainya 
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b, c, D ;
	float x1, x2 ;
	string akar ;
	
	cout << endl << " >>>>>> Program Akar kuadrat <<<<<<" << endl << endl ;
	cout << "masukkan nilai a : " ; cin >> a ;
	cout << "masukkan nilai b : " ; cin >> b ;
	cout << "masukkan nilai c : " ; cin >> c ;
	cout << endl ;
	
	D = (b * b) - (4 * a * c) ; 
	x1 = (-b + (sqrt(D))) / (2 * a) ;
	x2 = (-b - (sqrt(D))) / (2 * a) ;
	
	
	if (D > 0){
		akar = "real berlainan" ;
		cout << "persamaan kuadratnya : " << a << "x^2 " << b << "x " << c << endl ; 
		cout << "jenis akarnya adalah " << akar << endl ;
		cout << "nilai x1 : " << x1 << endl ;
	    cout << "nilai x2 : " << x2 << endl ;
		cout << "nilai D : " << D << endl ;	
	} else if (D == 0){
		akar = "real kembar" ; 
		cout << "persamaan kuadratnya : " << a << "x^2 " << b << "x " << c << endl ;
        cout << "jenis akarnya adalah " << akar << endl ;
	    cout << "nilai x1 : " << x1 << endl ;
	    cout << "nilai x2 : " << x2 << endl ;
        cout << "nilai D : " << D << endl ;			
	} else if (D < 0){
		akar = "imajiner" ;
		cout << "jenis akarnya adalah " << akar << endl ;
	}
		
	
 }