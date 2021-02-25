/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 13-11-2020
Nama program : tugas 4
Deskripsi :
*/

#include <iostream>
using namespace std;

struct pegawai{
	int nip;
	string nama;
	int gol;
};

void swap(int& a, int& b){
	int temp;
	temp = a;
    a = b;
	b = temp;
}

void hitung_gaji(int x, int& y){
	switch(x){
		case 1 : 
			y = 2000000;
		break;		
		case 2 :
			y = 3000000;
		break;
		case 3 : 
			y = 5000000;
		break;
		case 4 : 
			y = 8000000;
		break;
	}
	
}

void rerata(int x[], int n){
	int sum, rt;
	rt = 0;
	for (int i=0; i<n; i++){
		sum += x[i];
	}
	cout << "\nRata2 gaji : \n";
	rt = sum / n ;
	cout << rt;
	
}

void sort(int x[], int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n-i-1; j++){
			if (x[j]>x[j+1]){
				swap(x[j], x[j+1]);
			}
		}
	}	
}

void maximum(int x[], int n){
	int hasil;
	sort(x, n);
	hasil = x[n-1];
	cout << "\nGaji maximum : \n";
	cout << hasil;
}

void minimum(int x[], int n){
	int hasil;
	sort(x, n);
	hasil = x[0];
	cout << "\nGaji minimum : \n";
	cout << hasil;
}

void urutan(pegawai x[], int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n-i-1; j++){
			if (x[j].nip>x[j+1].nip){
				swap(x[j].nip, x[j+1].nip);
				swap(x[j].nama, x[j+1].nama);
			}
		}
	}	
	cout << "\nUrutan Karyawan Berdasar NIP : \n";
	for (int i=0; i<n; i++){
		cout << x[i].nip;
        cout << " " << x[i].nama << endl;
	}
}

void jumlah_karyawan(int& x){
	cout << "Masukkan jumlah karyawan : "; cin >> x;
}

void input_data(pegawai& x){
	cout << "Nama Karyawan     : "; cin >> x.nama;
	cout << "NIP Karyawan      : "; cin >> x.nip;
	cout << "Golongan(1/2/3/4) : "; cin >> x.gol;
	cout << endl;
}

int main() {
	pegawai karyawan[100];
	int n, rata, min, max;
	int gaji[100];
	
	jumlah_karyawan(n);
	
	cout << "Input Data \n";
	
	for (int i=0; i<n; i++){
		input_data(karyawan[i]);
		hitung_gaji(karyawan[i].gol, gaji[i]);	
	} 
	
	cout << "\nOutput Data \n\n";
	urutan(karyawan, n);
	rerata(gaji, n);
	minimum(gaji, n);
	maximum(gaji, n);
	
}





