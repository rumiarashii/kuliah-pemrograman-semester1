#include <iostream>
#include <math.h>

using namespace std;

void cetakBintang(int baris, int kolom); //prototipe / header fungsi dimana proses fungsinya akan dideclare dibawah main

void tambah(int x) { // fungsi dengan parameter pass by value, dimana seluruh proses fungsi ini tidak mengubah nilai aslinya (mengirim data salinan pada fungsi)
    x = x + 10;
    cout << x;
}

void kurang(int &x){ // fungsi dengan parameter pass by reference, dimana fungsu menerima alamat asli variabel, dan proses didalam fungsi akan mengubah nilai variabel itu
    x = x- 10;
    cout << x;
}

int main(){

    int a = 5;
    tambah(a);
    kurang(a);
    cout << a;

    cetakBintang(5, 7);
}

// fungsi didefiniskan di bawah setelah di declare header di atas main
void cetakBintang(int baris, int kolom){
    cout << "Pencetakan bintang : " << endl;

    for (int i=1; i <=baris; i++){
        for (int j=1; j <= baris; j++){
            cout << "*";
        }

        cout << endl;
    }
}
