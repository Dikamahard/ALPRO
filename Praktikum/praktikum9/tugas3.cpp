/*
Nama : Rizky Mahardika 
NPM : 140810200010
Tanggal buat : 13-11-2020
Nama program : tugas 3
Deskripsi :
*/

#include <iostream>
using namespace std;

struct waktu{
	int hh;
	int mm;
	int ss;	
};

struct struk{
	string plat;
	waktu masuk;
	waktu keluar;
	int biaya;
	waktu durasi;
};

void input_jam(waktu& x){
	cout << "Masukkan jam : "; cin >> x.hh;
	cout << "Masukkan menit : "; cin >> x.mm;
	cout << "Masukkan detik : "; cin >> x.ss;
	cout << endl;
}

void hitung_jam(waktu x, waktu y, waktu& hasil){
	int detik, temp;
	int hasilx, hasily;
	
	hasilx = (x.hh * 3600) + (x.mm * 60) + x.ss;
	hasily = (y.hh * 3600) + (y.mm * 60) + y.ss;
	
	detik = hasily - hasilx;
	
	hasil.hh = detik / 3600;
	temp = detik % 3600;
	hasil.mm = temp / 60;
	hasil.ss = temp % 60;
}

void jumlah_mobil(int& x){
	cout << "Masukkan jumlah mobil : "; cin >> x;
}

void bayar_parkir(waktu x, int& harga){
	if (x.hh < 1){
		harga = 1000;
	} else if (x.hh >= 1 && x.hh < 5){
		harga = 3000;
	} else {
		harga = 5000;
	}
}

void print_struk(struk mobil){
	cout << endl;
	cout << "===== STRUK PARKIR =====" << endl;
	cout << "Mobil " << mobil.plat << endl;
	cout << "Jam Masuk      : " << mobil.masuk.hh << ":" << mobil.masuk.mm << ":" << mobil.masuk.ss;
	cout << "\nJam Keluar   : " << mobil.keluar.hh << ":" << mobil.keluar.mm << ":" << mobil.keluar.ss;
	cout << "\nDurasi Jam   : " << mobil.durasi.hh << ":" << mobil.durasi.mm << ":" << mobil.durasi.ss;
	cout << "\nBiaya Parkir : " << mobil.biaya << endl;
}

int main() {   
	struk mobil[100];
	int n;
	
	jumlah_mobil(n);
	
	for (int i=1; i<=n; i++){
		cout << "\nMobil ke " << i << "\n";
		
		cout << "Jam masuk \n";
		input_jam(mobil[i].masuk);
		
		cout << "Jam keluar \n";
		input_jam(mobil[i].keluar);	
		
		hitung_jam(mobil[i].masuk, mobil[i].keluar, mobil[i].durasi); //ada sedikit kesalahan logic, kalo jam masuk lebih besar dari keluar, hasil min
		
		cout << "Masukkan plat mobil : "; cin >> mobil[i].plat;
		
		bayar_parkir(mobil[i].durasi, mobil[i].biaya);
	}
		
	for (int i=1; i<=n; i++){
		print_struk(mobil[i]);	
	}
	
}
