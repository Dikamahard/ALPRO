/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 10-11-2020
Nama program : latihan 2
Deskripsi :
*/

#include <iostream>
using namespace std;

typedef int matrix[10][10];

void banyak_data(int& a, int& b);
void input_matrix(matrix x, int a, int b);
void print_matrix(matrix x, int a, int b);

int main() {
	matrix x;
	int baris, kolom;
	
	banyak_data(baris, kolom);
	input_matrix(x, baris, kolom);
	print_matrix(x, baris, kolom);
	
	
}

void banyak_data(int& a, int& b){
	cout << "masukkan baris : "; cin >> a;
	cout << "masukkan kolom : "; cin >> b;
}

void input_matrix(matrix x, int a, int b){
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cout << "baris ke " << i+1 << " kolom ke " << j+1 << endl;
			cin >> x[i][j];
		}
	}
}

void print_matrix(matrix x, int a, int b){
	cout << endl;
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cout << x[i][j] << "\t";
		}
		cout << endl;
	}
}




