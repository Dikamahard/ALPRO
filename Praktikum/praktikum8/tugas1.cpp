/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 10-11-2020
Nama program : tugas 1
Deskripsi :
*/

#include <iostream>
using namespace std;

typedef int matrix[10][10];


void menu(matrix x, matrix y, int a, int b);
void banyak_data(int& a, int& b);
void input_matrix(matrix x, matrix y, int a, int b);
void print_matrix(matrix x, matrix y, int a, int b);
void jumlah_matrix(matrix x, matrix y, int a, int b);
void kali_matrix(matrix x, matrix y, int a, int b);
void transpose_matrix(matrix x, matrix y, int a, int b);

int main() {
	int baris, kolom;
	matrix x, y;
	
	banyak_data(baris, kolom);
	input_matrix(x, y, baris, kolom);
	print_matrix(x, y, baris, kolom);
	menu(x, y, baris, kolom);
}

void menu(matrix x, matrix y, int a, int b){
	int pil;
	char jawab;
	do{
	cout << "\nMenu Operasi Matrix \n";
	cout << "1. Penjumlahan \n";
	cout << "2. Perkalian matrix \n";
	cout << "3. Transpose matrix \n\n";
	cout << "Masukkan pilihan : "; cin >> pil;
	
	switch(pil){
		case 1 : 
			jumlah_matrix(x, y, a, b);
			cout << "apakah anda ingin melakukan opsi lain (y/n)";
			cin >> jawab;
		break;
		case 2: 
			kali_matrix(x, y, a, b);
			cout << "apakah anda ingin melakukan opsi lain (y/n)";
			cin >> jawab;
		break;
		case 3 : 
			transpose_matrix(x, y, a, b);
			cout << "apakah anda ingin melakukan opsi lain (y/n)";
			cin >> jawab;
		break;
		default : 
			cout << "opsi tidak ada";
		break;
	}
	
	}while(jawab == 'y' || jawab == 'Y');
	
	
}

void banyak_data(int& a, int& b){
	cout << "masukkan jumlah baris : "; cin >> a;
	cout << "masukkan jumlah kolom : "; cin >> b;
}

void input_matrix(matrix x, matrix y, int a, int b){
	cout << "Matrix Pertama " << endl;
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cout << "baris ke " << i+1 << " kolom ke " << j+1 << endl;
			cin >> x[i][j];
		}
	}
	cout << endl << "Matrix Kedua " << endl;
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cout << "baris ke " << i+1 << " kolom ke " << j+1 << endl;
			cin >> y[i][j];
		}
	}
}

void print_matrix(matrix x, matrix y, int a, int b){
	cout << "Matrix Pertama " << endl;
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cout << x[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << "Matrix Kedua " << endl;
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cout << y[i][j] << "\t";
		}
		cout << endl;
	}	
}

void jumlah_matrix(matrix x, matrix y, int a, int b){
	cout << "Hasil Penjumlahan \n";
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			cout << y[i][j] + x[i][j] << "\t";
		}
		cout << endl;
	}
}

void transpose_matrix(matrix x, matrix y, int a, int b){
	cout << "Transpose Matrix Pertama \n";
	for (int i=0; i<b; i++){
        for (int j=0; j<a; j++){
            cout << x[j][i]<<"\t";
        }
        cout<<endl;
    }
	
	cout << "\nTranspose Matrix Kedua \n";
	for (int i=0; i<b; i++){
        for (int j=0; j<a; j++){
            cout << y[j][i]<<"\t";
        }
        cout<<endl;
    }	
}

void kali_matrix(matrix x, matrix y, int a, int b){
	matrix z;
	if(a == b){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            z[i][j] = 0;
        }
    }
    cout << "Hasil perkalian kedua matriks adalah: \n";
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            for(int k = 0; k < a; k++){
                z[i][j] += (x[i][k] * y[k][j]);
            }
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << z[i][j] << "\t";
        }
        cout << endl;
    }
    } else{
        cout << "Ordo Matriks Tidak Memenuhi Syarat Perkalian"<<endl;
    }


}










