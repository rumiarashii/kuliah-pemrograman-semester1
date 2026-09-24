#include <iostream>
#include <string>
using namespace std;

int main(){
    /*      STUDI KASUS - 1     */
    string namaPraktikum;
    int npmPraktikum;
    float gradeTask;
    float gradeMid;
    float gradeEnd;
    float nilaiAkhir;
    int kkmUnik;

    cout << "--- Kalkulator Nilai Praktikum ---" << endl;

    cout << "Nama Praktikum : "; cin >> namaPraktikum;
    cout << "3 NPM Akhir    : "; cin >> npmPraktikum;
    cout << "Nilai Tugas    : "; cin >> gradeTask;
    cout << "Nilai UTS      : "; cin >> gradeMid;
    cout << "Nilai UAS      : "; cin >> gradeEnd;

    nilaiAkhir = (gradeTask * 0.3) + (gradeMid * 0.3) + (gradeEnd * 0.4);
    kkmUnik = 60 + ((npmPraktikum * 2) % 15);

    cout << "\nHasil Perhitungan: " << endl;
    cout << "Nilai Akhir     : " << nilaiAkhir << endl;
    cout << "KKM Unik        : " << kkmUnik << endl;

    /*      STUDY CASE - 2      */
    string statusLulus;
    string statusCumlaude = "Tidak Cumlaude";

    // if ((nilaiAkhir >= kkmUnik) && (nilaiAkhir > 85)){
    //     statusLulus = "LULUS";
    //     statusCumlaude = "Cumlaude";
    // } else if (nilaiAkhir >= kkmUnik){
    //     statusLulus = "LULUS";
    //     statusCumlaude = "Tidak Cumlaude";
    // } else {
    //     statusLulus = "TIDAK LULUS";
    //     statusCumlaude = "Tidak Cumlaude";
    // }

    if (nilaiAkhir >= kkmUnik){
        if (nilaiAkhir > 85){
            statusCumlaude = "Cumlaude";
        }

        statusLulus = "LULUS";
    } else {
        statusLulus = "TIDAK LULUS";
    }

    cout << "\n--- STATUS ---" << endl;
    cout << "Status Kelulusan : " << statusLulus << endl;
    cout << "Status Cumlaude  : " << statusCumlaude << endl;

    return 0;
}