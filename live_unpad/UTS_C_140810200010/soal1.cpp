/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 29-10-2020
Nama program : 
Deskripsi : 
*/

#include <iostream> 
#include <string>
using namespace std;

void kode_rahasia(string kata){
for (int i=0; i<4; i++ ){
    for(int j=0; j<(kata.size()/4); j++){
        if (kata[i+(kata.size()/4)*j] == 'X') {
        continue;
        }
        cout << kata[i+(kata.size()/4)*j];
    }
    
}

}

int main() {
string kata;

cout << "masukkan kata" << endl ;
cin >> kata;

kode_rahasia(kata);


}