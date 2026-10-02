#include <iostream>
#include <string>

using namespace std;

const int maxCabang = 20;
const int maxJenis = 20;

// tipe data buatan
struct Barang {
    int id; //primitif
    double harga; //primitif
};

// array satu dimensi
void inputBarang(int n, Barang daftarBarang[]){
    for (int i = 0; i < n; i++){
        cout << "\nInput barang ke - " << i + 1 << endl;
        cout << "Masukkan ID    : "; cin >> daftarBarang[i].id;
        cout << "Masukkan Harga : "; cin >> daftarBarang[i].harga;
    }
}

void cetakBarang(int n, int &totalBarang, Barang daftarBarang[]){
    cout << "\nHASIL BARANG!" << endl;
    for (int i = 0; i < n; i++){
        cout << "ID: " << daftarBarang[i].id << " | Harga: Rp " << daftarBarang[i].harga << endl;

        totalBarang += daftarBarang[i].harga;
    }
    cout << "Total Harga Barang: " << totalBarang;
}

void arraySatuDimensi(){
    int n;
    int totalHarga = 0;

    cout << "\nHITUNG HARGA BARANG ANDA!!!!" << endl;
    cout << "Masukkan jumlah barang anda: "; cin >> n;
    cout << "\n\n";

    Barang daftarBarang[n];

    inputBarang(n, daftarBarang);

    cetakBarang(n, totalHarga, daftarBarang);
}

// array dua dimensi
/*  Untuk input nilai dari suatu array bisa pakai std::vector ataupun seperti yang dibawah
, kita set dulu max dan min di arraynya*/
struct varianKopi {
    int stok;
    int harga;
};

void inputDataToko(int &jenisKopi, int &cabang){
    cout << "INPUT INFORMASI SOAL PERUSAHAAN KOPI" << endl;
    cout << "Masukkan jumlah jenis kopi(Max 20)   : "; cin >> jenisKopi;
    cout << "Masukkan jumlah cabang(Max 20)       : "; cin >> cabang;
}

void inputStok(int jenisKopi, int cabang, varianKopi toko[maxCabang][maxJenis]){
    for (int i = 0; i < cabang; i++){
        cout << "\n=== Input Data Cabang " << i + 1 << endl;
        for (int j = 0; j < jenisKopi; j++){
            cout << "   Kopi Jenis ke - " << j + 1 << endl;
            cout << "   - Masukkan jumlah stok: "; cin >> toko[i][j].stok;
            cout << "   - Masukkan Harga (Rp) : "; cin >> toko[i][j].harga;
        }
        cout << endl;
    }
}

void cetakLaporan(int jenisKopi, int cabang, varianKopi toko[maxCabang][maxJenis]){
    cout << "\n=====LAPORAN PERUSAHAAN KOPI=====" << endl;

    double nilaiPerusahaan = 0;

    for (int i = 0; i < cabang; i++){
        cout << "\nLaporan Cabang " << i + 1 << endl;
        double asetCabang = 0;

        for (int j = 0; j < jenisKopi; j++){
            double nilaiKopi = toko[i][j].stok * toko[i][j].harga;
            asetCabang += nilaiKopi;
            cout << "   Kopi Jenis " << j + 1 << endl;
            cout << "   Stok      : " << toko[i][j].stok << endl;
            cout << "   Harga     : Rp " << toko[i][j].harga << endl;
            cout << "   Nilai Kopi: Rp " << nilaiKopi << endl;
        }

        nilaiPerusahaan += asetCabang;
        cout << "Nilai Cabang - " << i + 1 << " : Rp " << asetCabang;
    }

    cout << "\nNILAI ASET PERUSAHAAN TOTAL: " << nilaiPerusahaan;
}

void stokTokoKopi(){
    int jenisKopi;
    int cabang;

    inputDataToko(jenisKopi, cabang);

    varianKopi tokoKopi[maxCabang][maxJenis];

    inputStok(jenisKopi, cabang, tokoKopi);

    cetakLaporan(jenisKopi, cabang, tokoKopi);
}

int main(){
    bool isTrue = true;
    int pilihan;

    stokTokoKopi();


    // while (isTrue){
    //     cout << "TUGAS ARRAY 1D DAN 2D" << endl;
    //     cout << "1. Array 1D (Menggunakan array struct barang)" << endl;
    //     cout << "2. Array 2D" << endl;
    //     cout << "3. Keluar" << endl;
    //     cout << "Masukkan pilihan mu: "; cin >> pilihan;

    //     switch(pilihan){
    //         case 1:
    //              arraySatuDimensi();
    //              break;
    //     }
    // }
    return 0;
}