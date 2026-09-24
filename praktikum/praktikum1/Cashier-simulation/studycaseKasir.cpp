#include <iostream>
#include <string>
using namespace std;

int main() {

    /*     STUDY CASE 1  */
    string nama_toko = "Saaturn";
    string nama_kasir = "Rumi";

    char kode = 'A';
    int hargaApel = 15500;
    int hargaJeruk = 12750;
    float minimumBelanja = 0.5;
    float pajak = 11.5;
    bool buka = true;

    // untuk menghitung float/double harus salah satu nilai yang dihitung adalah float dan otomatis hasil adalah float
    // cout << (float)hargaApel/hargaJeruk << endl;
    // cout << (char)(kode+1); // char akan dikonversi dan menjadikannya sebuah int, atau jika kita tambahkan (char), akan dikonversi lagi menjadi B


    /*     STUDY CASE 2    */
    string namaPembeli;
    float beratApel;
    float beratJeruk;
    int uangBayar;

    while (true) {
        int pilihan;

        cout << "Nama Toko  : " << nama_toko << endl;
        cout << "Kasir      : " << nama_kasir << endl;

        cout << "\nInput Transaksi" << endl;

        // cin otomatis memberi kita space setelah input nilai, jadi tidak usah \n
        cout << "Nama Pembeli   : "; cin >> namaPembeli;
        cout << "Berat Apel (Kg): "; cin >> beratApel;
        cout << "Berat Jeruk (Kg): "; cin >> beratJeruk;

        float totalApel = hargaApel * beratApel;
        float totalJeruk = hargaJeruk * beratJeruk;
        float totalBelanja = totalApel + totalJeruk;
        
        float totalPajak = totalBelanja * (pajak / 100);
        float grandTotal = totalBelanja + totalPajak;

        cout << "\nStruk Belanja" << endl;
        cout << "Pembeli: " << namaPembeli << endl;
        cout << "Berat Apel: " << beratApel << endl;
        cout << "Berat Jeruk: " << beratJeruk << "\n\n";

        cout << "Detail" << endl;
        cout << "Subtotal Apel  : Rp " << totalApel << endl;
        cout << "Subtotal Jeruk : Rp " << totalJeruk << endl;
        cout << "Total Belanjaan: Rp " << totalBelanja << endl;
        cout << "Pajak (11.5%)  : Rp " << totalPajak << endl;
        cout << "Grand Total    : Rp " << grandTotal << "\n\n";

        cout << "Pembayaran" << endl;
        cout << "Uang Bayar     : Rp "; cin >> uangBayar;

        if (uangBayar < grandTotal) {
            cout << "UANG TIDAK CUKUP!!!" << endl;
        } else {
            cout << "Kembalian      :" << (uangBayar - grandTotal) << endl;
        }

        cout << "Lanjut Ngasir ga nieh: (1/0) (1/All=Yes,0=No) "; cin >> pilihan;
        
        if (pilihan == 1) {
            continue;
        } else {
            break;
        }
    }
    
    return 0;
}