/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 9-12-2020
Nama program : Program kesan dan pesan
Deskripsi :
*/

#include <iostream>
#include <fstream>
using namespace std;

void buat_file(string& nama_file){
    cout << "Masukkan Nama file : ";
    getline(cin, nama_file);
}

void tulis_file(string nama_file){
    string kesan, pesan;
    ofstream filetex;
    
    filetex.open(nama_file, ios::app);
    filetex << "Kesan : \n";
    cout << "Tulis Kesan : \n";
    getline(cin, kesan);
    filetex << kesan;
    filetex << "\n\nPesan : \n";
    cout << "\nTulis Pesan : \n"; 
    getline(cin, pesan);
    filetex << pesan;
    filetex.close();

}


int main() {
    string nama_file;

    buat_file(nama_file);
    tulis_file(nama_file);
}
