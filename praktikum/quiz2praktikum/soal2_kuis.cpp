/*
Nama Lengkap            : Muhammad Celaleddin Rumi Arashi
Nomor Pokok Mahasiswa   : 140810260028
Kelas                   : Kelas B
*/

#include <iostream>
#include <string>
using namespace std;

struct Produk{
    string nama;
    int target;
    int jumlahProduksi;
}; 

typedef Produk produk[100]; // anggapan bahwa produk berjumlah maksimal 100

int main(){

    int n;
    cout << "Masukkan Jumlah barang: "; cin >> n;

    produk jumlahProduk;

    for (int i = 0; i  < n; i++){
        cout << "\nBarang ke -" << i + 1 << '\n';
        cout << "Masukkan nama barang       : "; cin >> jumlahProduk[i].nama;
        cout << "Masukkan target produksi   : "; cin >> jumlahProduk[i].target;
        cout << "Masukkan jumlah tercapai   : "; cin >> jumlahProduk[i].jumlahProduksi;
    }

    float highPercentage = jumlahProduk[0].jumlahProduksi / jumlahProduk[0].target;
    string marker;
    int totalProduksi = 0;

    for (int i = 0; i < n; i++){
        float percentage = (float(jumlahProduk[i].jumlahProduksi) / jumlahProduk[i].target) * 100;
        cout << percentage << endl;

        if (percentage > highPercentage){
            highPercentage = percentage;
            marker = jumlahProduk[i].nama;
        }

        totalProduksi += jumlahProduk[i].jumlahProduksi;
    }

    cout << "\n==== HASIL PRODUKSI ====\n";
    cout << "Pencapaian tertinggi : " << marker << "(" << highPercentage << "%) \n";
    cout << "Total Produksi       : " << totalProduksi << '\n'; 
    
    

    return 0;
}