/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 29-9-2020
Nama program : Program cetak struk
Deskripsi :  membuat program yang dapat mencetak struk detil dari sautu pembelian barang
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;

int main () {
	int harga, jumlah, total, uang, kembali ;
	string kasir, nama_k, nama_b ;
	char buku;
	
	cout << setw(40) << setfill('=') << '>' << endl ;
	cout << "Selamat Datang di Toko Buku Pusat Media" << endl ;
	cout << setw(40) << setfill('=') << '>' << endl ;
	
	cout << "\n Silakan pilih buku yang ingin anda beli" << endl
	<< " 1. Buku Pelajaran (kode: P,  Harga Rp. 75.000)" << endl << " 2. Buku Novel (kode: N, Harga Rp. 85.750)" 
	<< endl << " 3. Buku Resep (kode: R, Harga Rp. 65.000)" << endl ;
	cout << "\n masukkan kode buku : " ;
	cin >> buku ;
	cout << " masukkan jumlah buku : " ;
	cin >> jumlah ;
	
	switch (buku) {
		case 'P' :
		harga = 75000;
		nama_b = "Buku Pelajaran" ;
		break;
		
		case 'N' :
		harga = 85750;
		nama_b = "Buku Novel" ;
		break;
		
		case 'R' :
		harga = 65000;
		nama_b = "Buku Resep" ;
		break;
		
	}
	
	cout << "\n silakan pilih kasir anda : " << endl << " -Rangga (kode: RG) \n" << " -Nuri (kode: NR) \n" << " -Dira (kode: DR) \n" ;
	cout << "\n masukkan kode kasir : " ;
	cin >> kasir ;
	
	if (kasir == "RG") {
		nama_k = "Kasir Rangga" ;
	}else if (kasir == "NR") {
		nama_k = "kasir Nuri" ;
	}else if (kasir == "DR") {
		nama_k = "kasir Dira" ;
	}
	
	cout << " masukkan uang anda : " ;
	cin >> uang ;
	
	total = jumlah * harga;
	kembali = uang - total ;
	
	cout << "\n \n \n \n" ;
	cout << setw(40) << setfill('=') << '>' << endl ;
	cout << setw(30) << setfill (' ')<< "STRUK BELANJA ANDA \n" ;
	cout << setw(40) << setfill('=') << '>' << endl << endl;
	
	cout << " Nama Barang " << setw(7) << setfill (' ') << ':'<< setw(20) << setfill(' ') << nama_b << endl;
	cout << " Jumlah Barang " << setw(5) << setfill (' ') << ':'<< setw(20) << setfill(' ') << jumlah  << endl;
	cout << " Harga Barang " <<setw(6) << setfill (' ') << ':' << setw(20) << setfill(' ') << harga << endl ;
	cout << setw(40) << setfill('-') << "(+)" << endl ;
	cout << " Total Harga " <<setw(7) << setfill (' ') << ':' << setw(20) << setfill(' ') << total << endl ;
	cout << " Uang Bayar " << setw(8) << setfill (' ') << ':' << setw(20) << setfill(' ') << uang << endl ;
	cout << setw(40) << setfill('-') << "(-)" << endl ;
	cout << " Uang Kembali " << setw(6) << setfill (' ') << ':' << setw(20) << setfill(' ') << kembali << endl ;
	cout << setw(40) << setfill('-') << "(+)" << endl ;
	cout << " Nama Kasir " << setw(8) << setfill (' ') << ':' << setw(20) << setfill(' ') << nama_k << endl << endl ;
	
	cout << setw(40) << setfill('=') << '>' << endl ;
	cout << setw(30) << setfill (' ')<< "TERIMA KASIH ^_^ \n" ;
	cout << setw(40) << setfill('=') << '>' << endl << endl;
	
}