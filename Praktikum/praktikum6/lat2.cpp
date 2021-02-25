/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 20-10-2020
Nama program : 
Deskripsi : 
*/

#include <iostream>

using namespace std;

void fungsi(int a, int& b, int& c){
    b = ++a;
    c += b--;
    a = b+c;

    cout << a << b << c << endl;
}

int main(){
    int a, b, c, y;
    a = b = c = y = 2;

    fungsi (c, a, b);
    system("pause");
    cout << a << b << c << y << endl;

    system("pause");

    fungsi (a+b, c, y);
    system("pause");
    cout << a << b << c << y;
}
