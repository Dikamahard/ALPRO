/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 10-11-2020
Nama program : latihan 3
Deskripsi :
*/

#include <iostream>
using namespace std;

void swap(int& a, int& b);
void buble_sort(int arr[], int n);
void print_data(int arr[], int n);

int main() {
    int larik[] = {12, 36, 5, 19, 8};
    int n = sizeof(larik)/sizeof(larik[0]);

    cout << "array sebelum sorting : \n"; print_data(larik, n);
    buble_sort(larik, n);
    cout << "\narray setelah sorting : \n"; print_data(larik, n);
}

void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void buble_sort(int arr[], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[i] > arr[j+1]){
                swap(arr[1],arr[j+1]);
            }
        }
    }
}

void print_data(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << "data ke " << i+1 << " = " << arr[i] << endl;
    }
}

