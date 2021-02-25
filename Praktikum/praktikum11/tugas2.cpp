/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 1-12-2020
Nama program : Tugas 2
Deskripsi :
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void enkripsi(string nFile, int beda, string& text){
    ifstream fileteks;
    fileteks.open(nFile);
    getline(fileteks, text);
    for(int i=0; i<text.size(); ++i) {
        if(text[i] >= 'A' && text[i] <= 'Z'){
            text[i] += beda;
            if(text[i] > 'Z'){
                text[i] = text[i] - 'Z' + 'A' - 1;
            }
        } else if(text[i] >= 'a' && text[i] <= 'z'){
            text[i] += beda;
            if(text[i] > 'z'){
                text[i] = text[i] - 'z' + 'a' - 1;
            }
        }
    }
    fileteks.close();
}

void tulis_enkripsi(string nFile, string text){
    ofstream fileteks;
    fileteks.open(nFile);
    for(int i=0; i<text.size(); ++i) {
        fileteks.put(text[i]);
    }
    fileteks.close();
}

int main(){
    string namaFile,text;
    int beda;
    cout << "Masukkan nama file yang akan dienkripsi : "; cin >> namaFile;
    cout << "Masukkan besar penggeseran : "; cin >> beda;
    enkripsi(namaFile,beda,text);
    tulis_enkripsi(namaFile,text);
}