/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 20-9-2020
Nama program : tugas 1 praktikum 2
Deskripsi : mengkonversi nilai dari skala angka ke dalam huruf mutu
*/

#include <iostream>
using namespace std;
int main () {

int tugas, kuis, uts, uas ;
char mutu;
float tugas2, kuis2, uts2, uas2, total ;

cout << endl << " >>>>>> Program Konversi Nilai ke Huruf Mutu <<<<<<" << endl << endl ;
cout << "masukkan nilai tugas anda : " ; cin >> tugas ;
cout << "masukkan nilai kuis anda : " ; cin >> kuis ;
cout << "masukkan nilai uts anda : " ; cin >> uts ;
cout << "masukkan nilai uas anda : " ; cin >> uas ;

tugas2 = 0.25 * tugas ;
kuis2 = 0.20 * kuis ;
uts2 = 0.25 * uts ;
uas2 = 0.30 * uas ;


total = tugas2 + kuis2 + uts2 + uas2 ;

if ((total >= 80) && (total <= 100)){
	mutu = 'A' ;
} else if ((total >= 68) && (total <= 79)){
	mutu = 'B' ;
} else if ((total >= 56) && (total <= 67 )){
	mutu = 'C' ;
} else if ((total >= 45) && (total <= 55)){
	mutu = 'D' ;
}else if ((total >= 0) && (total <= 44)){
	mutu = 'E' ;
} else {mutu = '-' ;}

cout << "nilai total keseluruhan anda adalah : " << total << endl ;
cout << "konversi dalam mutu : " << mutu << endl ; 
}
