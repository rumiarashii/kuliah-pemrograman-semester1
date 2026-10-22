#include <iostream>
#include <string>
using namespace std;

// kita declare struct badan dan waktu, dan nested struct profil
struct Badan {
    float massaLemak;
    float massOtot; 
};

struct Waktu {
    int tahun;
    int bulan;
    int tanggal;
};

struct Profil {
    string nama;
    Badan pengukuranBadan;
    Waktu waktuPengukuran;
};

// input profil menggunakan pass by references untuk mengubah variable profil
void inputProfil(Profil &profil){
    cout << "Nama        : "; cin >> profil.nama;
    cout << "Massa Lemak : "; cin >> profil.pengukuranBadan.massaLemak;
    cout << "Massa Otot  : "; cin >> profil.pengukuranBadan.massOtot;
    cout << "Tanggal     : "; cin >> profil.waktuPengukuran.tanggal;
    cout << "Bulan       : "; cin >> profil.waktuPengukuran.bulan;
    cout << "Tahun       : "; cin >> profil.waktuPengukuran.tahun;
}

// fungsi yang return suatu profil baru hasil dari simulasi, dan akan ditangkap dan disimpan oleh variable di int main
// menggunakan pass by value, karena jika menggunakan pass by reference, otomatis profil asli akan terganggu padahal itu yang ingin kita jaga
Profil simulasiProfil(Profil profil){
    profil.pengukuranBadan.massaLemak -= (0.2 * profil.pengukuranBadan.massaLemak);
    profil.pengukuranBadan.massOtot += (0.5 * profil.pengukuranBadan.massOtot);

    profil.waktuPengukuran.tanggal += 7;

    return profil;
}

// perbarui nama agar menjadi sigma
void perbaruiNama(string& nama){
    nama = "Brother " + nama;
}

/* cetak profil menggunakan const dan pass by reference, karena apa?, karena jika datanya besar dan kita salin semua hanya untuk 
   mencetak atau membaca data, fungsinya bakal overhead, oleh karena itu digunakan pass by reference. Untuk memastikan agar data
   tidak diubah, maka gunakan const sebagai penolak jika kita tak sengaja mengubah data yang didalamnya*/
void cetakProfil(const Profil &profilAsli, const Profil &profilSimulasi){
    cout << "\n=== Profil Saat Ini ===" << endl;
    cout << "Nama           : " << profilAsli.nama << endl;
    cout << "Massa Lemak    : " << profilAsli.pengukuranBadan.massaLemak << " Kg" << endl;
    cout << "Massa Otot     : " << profilAsli.pengukuranBadan.massOtot << " Kg" << endl;
    cout << "Tanggal        : " << profilAsli.waktuPengukuran.tanggal << "-" << profilAsli.waktuPengukuran.bulan << "-" << profilAsli.waktuPengukuran.tahun << "\n";

    cout << "\n=== Profil SIMULASI JADI SIGMA ===\n";
    cout << "Nama        : " << profilSimulasi.nama << endl;
    cout << "Massa Lemak : " << profilSimulasi.pengukuranBadan.massaLemak << " Kg" << endl;
    cout << "Massa Otot  : " << profilSimulasi.pengukuranBadan.massOtot << " Kg" << endl;
    cout << "Tgl         : " << profilSimulasi.waktuPengukuran.tanggal << "-" << profilSimulasi.waktuPengukuran.bulan << "-" << profilSimulasi.waktuPengukuran.tahun; 

}

int main(){
    Profil profilAsli; // kita masukkan profil asli, bisa dengan cara ini menggunakan void konvensional atau fungsi struct
    inputProfil(profilAsli);

    Profil profilSimulasi = simulasiProfil(profilAsli); // kita tangkap return hasil simulasiprofil di variable profilSimulasi

    perbaruiNama(profilSimulasi.nama); // kita ganti nama

    cetakProfil(profilAsli, profilSimulasi); //kita cetak menggunakan fungsi

}