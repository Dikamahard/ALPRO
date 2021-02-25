/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 
Nama program : 
Deskripsi :
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct kas{
    string tanggal;
    string merk;
    int harga;
    int jumlah;
    int subtot;
};

void input_data(kas data[5]){
    for (int i=0; i<=4; i++){
        cout << "Masukkan tanggal transaksi ke " << i+1 << endl;
        cin >> data[i].tanggal;
        cout << "Masukkan merk minyak ke " << i+1 << endl;
        cin.ignore(100,'\n');
        getline(cin, data[i].merk);
        cout << "Masukkan harga satuan ke " << i+1 << endl;
        cin >> data[i].harga;
        cout << "Masukkan jumlah barang  ke " << i+1 << endl;
        cin >> data[i].jumlah;
        cout << endl;
    }
}

void hitung_harga(kas barang[5], int& total){
    total = 0;
    for (int i=0; i<=4; i++){
        barang[i].subtot = barang[i].harga * barang[i].jumlah; 
        total = total + barang[i].subtot;
    }
    
}

void print_data(kas barang[5]){
    cout << "Tanggal " << "\t" << "Merk " << "\t" << "Harga " << "\t" << "Jumlah" << "\t" << "Subtot" << "\n";
    for (int i=0; i<=4; i++){
        cout << barang[i].tanggal << "\t" << barang[i].merk << "\t" << barang[i].harga << "\t" << barang[i].jumlah << "\t" << barang[i].subtot << "\n";
    }

}


int main() {
    kas minyak[5];
    int total;

    input_data(minyak);
    hitung_harga(minyak, total);
    print_data(minyak);


}