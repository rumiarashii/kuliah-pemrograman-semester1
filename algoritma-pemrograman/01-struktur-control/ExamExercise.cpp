#include <iostream>
#include <string>

using namespace std;



void sistemInsentif(){
    string id;
    char golongan;
    int status;
    int usia;
    int tahunKerja;
    int performaTahunan;
    string predikat;

    bool isTrue = true;

    int gajiPokok = 0;
    int bonus = 0;
    int totalGaji = 0;

    while (isTrue){
        cout << "INPUT DATA" << endl;
        cout << "Masukkan ID Kamu           : "; getline(cin, id); 
        cout << "Golongan Anda(A/B/C)       : "; cin >> golongan;
        cin.ignore();

        golongan = toupper(golongan);
        if (!(golongan == 'A' || golongan == 'B' || golongan == 'C')){
            cout << "\nInput tidak valid! \n";
            continue;
        }

        cout << "Status pegawai(1/2/3)      : "; cin >> status;
        cin.ignore();
        if (!(status == 1 || status == 2 || status == 3)){
            cout << "\nInput tidak valid! \n";
            continue;
        }

        cout << "Usia                       : "; cin >> usia;

        cout << "Masa Kerja (Tahun)         : "; cin >> tahunKerja;
        cout << "Performa Tahunan (1-100)   : "; cin >> performaTahunan;
        cin.ignore();

        if (performaTahunan < 0 || performaTahunan > 100){
            cout << "\nInput tidak valid! \n";
            continue;
        }

        isTrue = false;
    }


    switch (golongan){
    case 'A': gajiPokok = 5000000; break;
    case 'B': gajiPokok = 7500000; break;
    case 'C': gajiPokok = 10000000; break;
    default:
        break;
    }

    if (status == 1){
        if (tahunKerja >= 5 && usia >= 50){ //diputuskan untuk jika umur 50 udah qualify untuk masuk bonus gede
            bonus += 10000000;
        } else if (tahunKerja >= 5 && usia < 50){
            bonus += 3000000;
        } else if (tahunKerja < 5){
            bonus += 5000000;
        }
    } else {
        if (tahunKerja > 3 && performaTahunan >= 85){
            bonus += 4000000;
        } else if (performaTahunan >= 70){
            bonus += 1500000;
        }
    }

    predikat = (performaTahunan >= 75) ? "Sangat Memuaskan" : "Perlu Evaluasi";

    totalGaji = gajiPokok + bonus;

    cout << "\nHasil" << endl;
    cout << "Karyawan dengan ID " << id << endl;
    cout << "Gaji Akhir     : Rp " << totalGaji << " (Dengan performa " << predikat << ") " << endl;
    
}

int main(){
    sistemInsentif();
}