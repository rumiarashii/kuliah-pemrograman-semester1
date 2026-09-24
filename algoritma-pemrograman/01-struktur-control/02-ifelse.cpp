#include <iostream>
#include <string>
using namespace std;

/* CPP sebenarnya menganut OOP dan tipe data int pada main adalah penanda 
buat return 0 yang berarti tidak ada error*/
int main() {
    /* STRUKTUR KONTROL (IF-ELSE)*/
    string status = "pegawai";
    string tanda;
    int grade = 80;
    char golongan = 'A';

    /*nested if, dimana akan hanya akan melakukan pemeriksaan satu saja
     bukan single if yang memeriksa satu satu dengan kondisi yang banyak*/
    if (status == "pegawai"){ 
        // cout << "layak terima gaji";
    } 
    else {
        // cout << "tidak layak menerima gaji";
    }

    /*SWITCH CASE*/
    switch(golongan){
        case 'A':
            // cout << "50000";
            break;
        case 'B':
            // cout << "70000";
            break;
        default:
            break;
    }

    /*TERNARY OPERATOR*/
    tanda = (grade > 60) ? "Lulus" : "Gagal";
    cout << tanda;


    /*LATIHAN 1*/
    int tahun;
    int workYears;
    int gaji;
    int gajiTahunan;

    cout << "\nTahun anda bekerja: "; cin >> tahun;
    cout << "Berapa lama anda bekerja (tahun): "; cin >> workYears;

    if (tahun < 2024 && tahun >= 2019) {
        switch(workYears){
            case 0: gaji += 2579400; break;
            case 1: gaji += 2579400; break;
            case 2: gaji += 2660700; break;
            case 3: gaji += 2660700; break;
            case 4: gaji += 2744500; break;
            case 5: gaji += 2744500; break;
            case 6: gaji += 2830900; break;
            case 7: gaji += 2830900; break;
            case 8: gaji += 2920100; break;
            case 9: gaji += 2920100; break;
        }

    } else if (tahun >= 2024) {
        switch(workYears){
            case 0: gaji += 2785700; break;
            case 1: gaji += 2785700; break;
            case 2: gaji += 2873500; break;
            case 3: gaji += 2873500; break;
            case 4: gaji += 2964400; break;
            case 5: gaji += 2964400; break;
            case 6: gaji += 3057300; break;
            case 7: gaji += 3057300; break;
            case 8: gaji += 3153600; break;
            case 9: gaji += 3153600; break; 
        }
    } else {
        gaji = 0;
        cout << "Tidak ada aturan untuk tahun " << tahun << endl;
    }

    gajiTahunan = gaji * 12;
    cout << "Gaji anda: " << gajiTahunan;


    /*LATIHAN 2*/
    int golongan;
    int lamaKerja;
    int umur;
    int bonus;

    if (golongan == 0){
        if ((lamaKerja >= 5) && (umur >= 50)){
            bonus += 10000000;
        } else {
            bonus += 5000000;
        }
    } else if (golongan == 1){
        if ((lamaKerja >= 5) && (umur > 50)){
            bonus += 4000000;
        } else if ((lamaKerja >= 5) && (umur < 50)){
            bonus += 2500000;
        } else if (umur < 50){
            bonus += 3000000;
        }
    }

}