/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 20-10-2020
Nama program : 
Deskripsi : 
*/

#include <iostream>

using namespace std;

void swap(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main (){
    int x, y;
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y; 

    swap (x,y);

    cout << "\nSWAP\n" << endl;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
}
