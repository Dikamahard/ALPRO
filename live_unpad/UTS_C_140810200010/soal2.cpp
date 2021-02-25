/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 
Nama program : 
Deskripsi : 
*/

#include <iostream>
using namespace std;
int main() {
int kelinci=0, kodok=0, kangguru=0;


 for (int i=1; i<=4; i++){
    kelinci += 3 ;
    kodok += 2 ;
    kangguru += 5 ;
    }

 if (kelinci > 14){
        kelinci -= 15;
    }
 if (kodok > 14){
        kodok -= 15;
    }
if (kangguru > 14){
        kangguru -= 15;
    }

cout << kelinci << ", " << kodok << ", " << kangguru ;

}