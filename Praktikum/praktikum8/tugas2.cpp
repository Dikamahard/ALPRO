/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 10-11-2020
Nama program : latihan 3
Deskripsi :
*/

#include <iostream>
using namespace std;

typedef int array[100];

void insertion(array a, int n){
      for(int i = 1;i < n;i++){
        for(int j = i - 1; j >= 0; j--){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
                i = j;
            }
        }
    }
}

void selection(array a, int n){
      int min;
    for(int i = 0; i < n;i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        swap(a[i],a[min]);
    }
}

void merge(array a, int n){
     for(int i = 0; i < n/2; i++){
        for(int k = i - 1; k >= 0; k--){
            if(a[i] < a[k]){
                swap(a[i], a[k]);
                i = k;
            }
        }
    }
    for(int j = n/2; j < n; j++){
        for(int l = j - 1; l >= 0; l--){
            if(a[j] < a[l]){
                swap(a[j], a[l]);
                j = l;
            }
        }
    }
}

void swap(int& a, int& b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void input_data(array a, int& n){
    cout << "masukkan jumlah data : "; cin >> n;
    
    for (int i=0; i<n; i++ ){
        cout << "data ke " << i+1 << " : ";
        cin >> a[i];
    }
}

void print_data(array a, int n){
    for (int i=0; i<n; i++){
        cout << a[i] << ", ";
    }
}

void menu(array a, int n){
    int pil;

    cout << "\n\nPilih Sorting : \n";
    cout << "1. Insertion \n";
    cout << "2. Selection \n";
    cout << "3. Merge \n";
    cout << "Pilih(1/2/3)\n";
    
    cin >> pil;
    
    switch(pil){
        case 1:
            insertion(a, n);
        break;
         case 2:
            selection(a, n);
        break;
         case 3:
            merge(a, n);
        break;
    }
}

int main() {

int jumlah;
array a; 

input_data(a, jumlah);

cout << "\nSebelum Sorting : " << endl;
print_data(a, jumlah);

menu(a, jumlah);

cout << "\nSetelah sorting : " << endl;
print_data(a, jumlah);

}
