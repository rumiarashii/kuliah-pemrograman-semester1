#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// menggunakan tipe data alias agar mudah dimodularkan (ngide buat bikin fungsi)
typedef int Array[50];

// function untuk menginput jumlah mahasiswa dengan error handling while isTrue
void jumlahMahasiswa (int &n){
    bool isTrue = true
    while (isTrue){
        cout << "Masukkan Jumlah Mahasiswa (maks 50): "; cin >> n;

        //error handling jika user yang ga sehat menginput jumlah mahasiswa 0 atau dibawahnya
        if (n <= 0){
            cout << "INPUT TIDAK SESUAI!" << endl;
            continue;
        } else {
            isTrue = false;
        }
    }
    
}

// menginput nilai mahasiswa berdasarkan jumlah mahasiswa yang telah diinput sebelumnya
void inputNilai(int n, int &totalNilai, Array nilaiMahasiswa){
     for (int i = 0; i < n; i++){
        cout << "Masukkan Nilai Mahasiswa ke - " << i + 1 << " : "; cin >> nilaiMahasiswa[i]; 
        totalNilai += nilaiMahasiswa[i]; // penjumlahan untuk total nilai
    }
}

// function untuk proses nilai mulai dari menentukan total, rata rata, nilai terbesar, nilai terkecil
void prosesNilai(int n, int &totalNilai, int &nilaiTerkecil, int &nilaiTerbesar , Array nilaiMahasiswa){
    
    // set nilai terkecil dan terbesar
    nilaiTerkecil = nilaiMahasiswa[0]; //bisa juga dengan 0 
    nilaiTerbesar = nilaiMahasiswa[0]; // bisa juga dengan 100
    
    
    // perulangan untuk mencetak nilai mahasiswa
    for (int i = 0; i < n; i++){
        cout << "Mahasiswa ke - " << i + 1 << " : " << nilaiMahasiswa[i] << endl;

        // set nilai terkecil dan terbesar berdasarkan nilai mahasiswa yang telah di iterasikan 
        if (nilaiMahasiswa[i] < nilaiTerkecil){
            nilaiTerkecil = nilaiMahasiswa[i];
        } 

        if (nilaiMahasiswa[i] > nilaiTerbesar){
            nilaiTerbesar = nilaiMahasiswa[i];
        }
    }

    // printout hasil nilai yang telah diproses sebelumnya
    cout << "\n\nHASIL NILAI\n\n";
    cout << "Total Nilai    : " << totalNilai << endl;
    cout << "Rata-Rata      : " << float(totalNilai) / n << endl; // penggunaan float() untuk mengubah nilai menjadi float
    cout << "Nilai Terbesar : " << nilaiTerbesar << endl;
    cout << "Nilai Terkecil : " << nilaiTerkecil << endl;
}

int main(){
    // set variabel variabel utama di scope main
    int n;

    int totalNilai = 0;

    int nilaiTerkecil;
    int nilaiTerbesar;

    // memanggil fungsi jumlah mahasiswa
    jumlahMahasiswa(n);

    // set array nilaiMahasiswa
    cout << "=====REKAP NILAI MAHASISWA=====\n\n";
    Array nilaiMahasiswa;

    // memanggil fungsi input nilai
    inputNilai(n, totalNilai, nilaiMahasiswa);
   
    cout << "\n\n=====DATA NILAI MAHASISWA=====\n\n";

    // memanggil fungsi proses nilai
    prosesNilai(n, totalNilai, nilaiTerkecil, nilaiTerbesar, nilaiMahasiswa);
}