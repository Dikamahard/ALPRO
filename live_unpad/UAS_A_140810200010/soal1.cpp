/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 17-12-2020
Nama program :
Deskripsi : UAS
*/

#include <iostream>
using namespace std;

typedef int larik[100];

struct jenis{
    int satu; 
    int dua; 
    int tiga; 
    int empat; 
    int lima; 
};

/*
void Sort(matrix a, int n){
  int i, j, temp;
  for (i = 0; i < n; i++){
    for (j = 0; j < n - i - 1; j++){
      if (a[j] > a[j + 1]){
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}
*/

void migratoryBirds(larik a, jenis b, int n){
    int max;
    b.satu = b.dua = b.tiga = b.empat = b.lima = 0;

    for (int i=0; i<n; i++){
            if (a[i] == 1){
                b.satu++;
                break;
            }else if (a[i]== 2){
                b.dua++;
                break;
            }else if(a[i]== 3){
                b.tiga++;
                break;
            }else if (a[i]== 4){
                b.empat++;
                break;
            }else if(a[i]== 5){
                b.lima++;
                break;
            }
    
    }

    if (b.satu > b.dua && b.satu > b.tiga && b.satu > b.empat && b.satu > b.lima){
        max = 1;
    } else if (b.dua > b.satu && b.dua > b.tiga && b.dua > b.empat && b.dua > b.lima){
        max = 2;
    } else if (b.tiga > b.satu && b.tiga > b.dua && b.tiga > b.empat && b.tiga > b.lima){
        max = 3;
    } else if (b.empat > b.satu && b.empat > b.dua && b.empat > b.tiga && b.empat > b.lima){
        max = 4;
    }else if (b.lima > b.satu && b.lima > b.dua && b.lima > b.tiga && b.lima > b.empat){
        max = 5;
    }

    cout << max;

}

void input_id(int n, larik a){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

int main() {
larik burung;
jenis counter;
//matrix jenis = {1,2,3,4,5};
int n;

cout << "Masukkan jumlah burung yang terlihat : "; cin >> n;
cout << "Masukkan id burung : \n";

input_id(n, burung);
cout << "\nOutput :\n";
migratoryBirds(burung, counter, n);

}