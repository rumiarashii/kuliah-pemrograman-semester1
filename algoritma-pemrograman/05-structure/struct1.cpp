#include <iostream>
using namespace std;

// ini adalah contoh dari penggunaan struct, kita panggil menggunakan dot(.)
struct Waktu {
    unsigned int jam;
    unsigned int menit;
    unsigned int detik;
};

// soal 2
struct koordinat {
    float absis;
    float ordinat;
};

void getWaktu(Waktu &wkt){
    cout << "Masukkan jam = "; cin >> wkt.jam;
    cout << "Masukkan menit = "; cin >> wkt.menit;
    cout << "Masukkan detik = "; cin >> wkt.detik;

    cout << wkt.jam << ":" << wkt.menit << ":" << wkt.detik;
}



//soal 1
void getKoordinat(koordinat &koor){
    cout << "Masukkan Absis (x) : "; cin >> koor.absis;
    cout << "Masukkan ordinat (y) : "; cin >> koor.ordinat;
}

void titikTengah(koordinat a, koordinat b){
    float absisMid;
    float ordinatMid;

    absisMid = (a.absis + b.absis) / 2;
    ordinatMid = (a.ordinat + b.ordinat) / 2;

    cout << "Titik Tengah " << "(" << absisMid << "," << ordinatMid << ")";
}

struct Produk { 
    string nama; 
    int harga; 
    int stok; 
};


Produk buatProduk(string nama, int harga, int stok) { 
    Produk p; 
    p.nama = nama;
    p.harga = harga;
    p.stok = stok;
    return p;
}


int main(){
    
    cout << buatProduk("Makan", 1000, 20);
    return 0;
}

//tugas struct di ppt sesi 9 (KERJAKAN SEBAGAI PEMANTAPAN MATERI STRUCT)
