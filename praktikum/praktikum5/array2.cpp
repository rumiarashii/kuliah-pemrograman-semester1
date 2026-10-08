#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    //set variable dengan ukuran lantai danr ruangan yang fix yaitu 3x4
    int suhuGedung[3][4];
    double totalPerLantai[3] = {0}; // set nilai seluruh nya menjadi 0 agar menghindari error garbage value
    int totalNilai = 0;

    int suhuTertinggi = 0;
    int lantaiTertinggi = 0;
    int ruanganTertinggi = 0;

    
    // perulangan untuk menginput suhu dan ruangan
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << "Masukkan suhu lantai " << i + 1 << ", ruangan " << j + 1 << " : "; cin >> suhuGedung[i][j];
        }

        cout << "\n\n";
    }

    // set suhu terendah dengan indeks 0x0
    suhuTertinggi = suhuGedung[0][0];

    /* perulangan untuk mencetak suhu ruangan serta menghitung total suhu per lantai, 
    serta mendapatkan nilai total dari masing masing lantai  */
    for (int i = 0; i < 3; i++){
        cout << "Lantai " << i + 1 <<  "\t";
        for (int j = 0; j < 4; j++){
            cout << suhuGedung[i][j] << "  ";
            totalPerLantai[i] += suhuGedung[i][j];

            if (suhuGedung[i][j] > suhuTertinggi){ // pengecekan untuk set terbesar dan lokasinya
                suhuTertinggi = suhuGedung[i][j];
                lantaiTertinggi = i;
                ruanganTertinggi = j;
            }
        }

        cout << endl;
    }

    cout << "\n\nDATA SUHU GEDUNG\n\n";

    // menggunakan for untuk mengeluarkan suhu per lantai yang sudah dihitung
    for(int i = 0; i < 3; i++){
        cout << "Rata-rata lantai " << i + 1 << " : " << float(totalPerLantai[i]) / 4 << endl;
    }
    

    //print data suhu tertinggi dan lokasinya yang sudah diset di perulangan sebelumnya
    cout << "\n";
    cout << "Suhu Tertinggi : " << suhuTertinggi << " C" << endl;
    cout << "Lokasi         : Lantai " << lantaiTertinggi + 1 << ", Ruangan " << ruanganTertinggi + 1 << endl; 


}