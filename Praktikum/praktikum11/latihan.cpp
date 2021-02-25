/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 1-12-2020
Nama program : Latihan operasi file
Deskripsi :
*/

#include <iostream>
#include <fstream>
using namespace std;

void bukaTulisIsiFile(char nfile[]);
void tambahIsiFile(char nfile[], char isi[]);
void periksaFile(char nfile[]);
void isiFilePerKarakter(char nfile[]);
void cetakIsiFilePerKarakter(char nfile[]);
int cariJumlahHurufA(char nfile[]);

int main(){
 char namafile[] = "openfile.txt";
 char isi[] = "Hello Jatinangor!";

 periksaFile(namafile);
 system("pause");
 system("cls");
 bukaTulisIsiFile(namafile);
 tambahIsiFile(namafile, isi);
 //periksa_file(namafile);
 isiFilePerKarakter(namafile);
 cetakIsiFilePerKarakter(namafile);
 //buka_tulis_isi_file(namafile); 
 cout <<"Jumlah huruf A = " << cariJumlahHurufA(namafile) << endl;
 return 0;
}

void bukaTulisIsiFile(char nfile[]){
 ofstream fileteks;
 fileteks.open(nfile);
 fileteks << "Hello World!" << endl;
 fileteks.close();
}
void tambahIsiFile(char nfile[], char isi[]){
 ofstream fileteks;
 fileteks.open(nfile, ios::app);
 fileteks << "Hello Unpad !" << endl;
 fileteks << isi << endl;
 fileteks.close();
}
void periksaFile(char nfile[]){
 ifstream fileteks;
 fileteks.open(nfile);
 if(fileteks.fail()){
  cout << "File tidak dapat ditemukan" << endl;
 }else{
  cout << "File dapat ditemukan" << endl;
 }
 fileteks.close();
}
void isiFilePerKarakter(char nfile[]){
 ofstream fileteks;
 fileteks.open(nfile, ios::app);
 fileteks.put('A');
 fileteks.put('B');
 fileteks.put('C');
 fileteks.put('\n');
 fileteks.close();
}
void cetakIsiFilePerKarakter(char nfile[]){
 char karakter;
 ifstream fileteks;
 fileteks.open(nfile);
 while(!fileteks.eof()){
  fileteks.get(karakter); 
  cout << karakter;
 }
 fileteks.close();
}
int cariJumlahHurufA(char nfile[]){
 char karakter;
 int jumlahA = 0;
 ifstream fileteks;
 fileteks.open(nfile);
 while(!fileteks.eof()){
  fileteks.get(karakter);
  if(karakter == 'A' || karakter == 'a'){
   jumlahA = jumlahA + 1;
  }
 }
 fileteks.close();
 return jumlahA;
}