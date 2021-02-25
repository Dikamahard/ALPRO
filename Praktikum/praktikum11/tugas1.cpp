/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 1-12-2020
Nama program : Tugas 1
Deskripsi :
*/

#include <iostream>
#include <fstream>
using namespace std;

void isiFile(char nfile[], string isi){
    ofstream fileteks;
    fileteks.open(nfile);
    getline(cin,isi);
    fileteks << isi << endl;
    fileteks.close();
}
int cariJumlahKarakter (string namaFile, char huruf){
    char karakter;
    int jumlahHuruf = 0;
    ifstream fileteks;

    fileteks.open(namaFile);
    while(!fileteks.eof()){
        fileteks.get(karakter);
        if(karakter == toupper(huruf) || karakter == tolower(huruf)){
        jumlahHuruf++;
        //fileteks.get(karakter);
        }
    }
    fileteks.close();
    return jumlahHuruf;
}
int main(){
    char namaFile[] = "operasiFile.txt";
    string isi;
    char huruf;
    cout << "Input Isi File : \n";
    isiFile(namaFile, isi);
    cout << "Jumlah Huruf Yang Dicari  = "; cin >> huruf; 
    cout << cariJumlahKarakter(namaFile,huruf) << endl;
}