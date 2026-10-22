#include <bits/stdc++.h>
using namespace std;

// Declare struct barang berisi nama harga dan jumlah
struct Barang{
    string nama;
    int harga;
    int jumlah;
};


int main(){
    int n;
    cout << "Masukkan Jumlah barang: "; cin >> n; //masukkan jumlah barang

    Barang jumlahBarang[100]; // bisa dipakai n juga

    // input data barang berdasarkan jumlah barang
    for (int i = 0; i < n; i++){
        cout << "\nBarang ke - " << i + 1 << "\n";
        cout << "Nama Barang  : "; cin >> jumlahBarang[i].nama;
        cout << "Harga        : "; cin >> jumlahBarang[i].harga;
        cout << "Jumlah Beli  : "; cin >> jumlahBarang[i].jumlah;
    }

   
    int tertinggi = jumlahBarang[0].harga; //tertinggi awal sudah pasti mulai dari 0 dan akan kita cek melalui perulangan
    string namaTertinggi = jumlahBarang[0].nama; //sama halnya seperti namaTertinggi
    int totalBelanja = 0; //total belanja mulai dari 0

    cout << "=== STRUK BELANJA INDOMARET ===" << "\n";
    for (int i = 0; i < n; i++){
        int hargaItem = jumlahBarang[i].jumlah * jumlahBarang[i].harga; //harga item di reset setiap iterasi
        totalBelanja += hargaItem; // total belanja ditambah dengan hahrga item
        cout << "1. " << jumlahBarang[i].nama << " (" << jumlahBarang[i].jumlah << " x Rp" << jumlahBarang[i].harga << ") = Rp" << hargaItem << '\n';  

        if (jumlahBarang[i].harga > tertinggi){ // pengecekan apakah barang yang dicek sekarang ini adalah harga tertinggi
            tertinggi = jumlahBarang[i].harga; // jika iya, ubah elemen tertinggi dan namanya ke elemen barang sekarang
            namaTertinggi = jumlahBarang[i].nama;
        }
    }

    cout << "Harga bayar tertinggi : Rp" << tertinggi << " (" << namaTertinggi << ") " << '\n';
    cout << "Total Bayar           : Rp" << totalBelanja; 
}