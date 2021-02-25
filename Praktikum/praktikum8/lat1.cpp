/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 10-11-2020
Nama program : latihan 1
Deskripsi :
*/

#include <iostream>
using namespace std;

void banyak_data(int& n);
void input_larik(int a[], int n);
void print_larik(int a[], int n);

int main() {
	int n ;
	int a[10];
	
	banyak_data(n);
	input_larik(a, n);
	print_larik(a, n);
	
}

void banyak_data(int& n){
	
	cout << "masukkan banyak data : ";
	cin >> n;
}

void input_larik(int a[], int n){
	
	cout << "masukkan data larik : " << endl;
	for (int i=0; i<n; i++){
		cout << "data ke - " << i+1 << " : ";
		cin >> a[i];
	}
}

void print_larik(int a[], int n){
	
	cout << "\ndata yang dimasukkan dalam larik : " << endl;
	for (int i=0; i<n; i++){
		cout << "data ke - " << i+1 << " : ";
		cout << a[i] << endl ;
	}
}




