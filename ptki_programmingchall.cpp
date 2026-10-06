#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int digitNIM;
    int jumlahMahasiswa = 0;
    int batasKelulusan = 0;

    int nilaiTotal = 0;
    float nilaiRata = 0;
    int jumlahLulus = 0;
    int notLulus = 0;

    int nilaiTertinggi = 0;
    int nilaiTerendah = 0;
    int mahasiswaTinggi = 1;    
    int mahasiswaRendah = 1;

    

    cout << "Masukkan Digit Terakhir NIM Anda: "; cin >> digitNIM;

    jumlahMahasiswa = 5 + (digitNIM % 4);

    int nilaiMahasiswa[jumlahMahasiswa];


    if (digitNIM % 2 == 0){
        batasKelulusan = 60;
    } else {
        batasKelulusan = 65;
    }

    for (int i = 0; i < jumlahMahasiswa; i++){
        cout << "Masukkan nilai mahasiswa " << i + 1 << " : "; cin >> nilaiMahasiswa[i];
        unsigned int counter = 0; 

        if (nilaiMahasiswa[i] > 90){
            nilaiMahasiswa[i] += 2;

            if (nilaiMahasiswa[i] > 100){
                counter = nilaiMahasiswa[i] - 100;
                nilaiMahasiswa[i] -= counter;
            }
        }
    }
    nilaiTertinggi = nilaiMahasiswa[0];
    nilaiTerendah = nilaiMahasiswa[0];

    cout << "\nNILAI AKHIR" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++){
        char predikat; 

        if (nilaiMahasiswa[i] >= 85){
            predikat = 'A';
        } else if (nilaiMahasiswa[i] >= 70){
            predikat = 'B';
        } else if (nilaiMahasiswa[i] >= batasKelulusan){
            predikat = 'C';
        } else if (nilaiMahasiswa[i] < batasKelulusan) {
            predikat = 'D';
        }

        cout << "Mahasiswa " << i + 1 << ": " << nilaiMahasiswa[i] << "(" << predikat << ")" << endl;
        nilaiTotal += nilaiMahasiswa[i];

        

        if (nilaiMahasiswa[i] >= batasKelulusan){
            jumlahLulus += 1;
        } else {
            notLulus += 1;
        }

        if (nilaiMahasiswa[i] > nilaiTertinggi){
            nilaiTertinggi = nilaiMahasiswa[i];
            mahasiswaTinggi = i + 1;
        }

        if (nilaiTerendah > nilaiMahasiswa[i]){
            nilaiTerendah = nilaiMahasiswa[i];
            mahasiswaRendah = i + 1;
        }
    }

    nilaiRata = (float)nilaiTotal / jumlahMahasiswa;
    cout << "Rata rata kelas    : " << fixed << setprecision(2) <<  nilaiRata << endl;
    cout << "Nilai Tertinggi    : " << nilaiTertinggi << " (Mahasiswa " << mahasiswaTinggi << ")" << endl;
    cout << "Nilai Terendah     : " << nilaiTerendah << " (Mahasiswa " << mahasiswaRendah << ")" << endl;
    cout << "Lulus              : " << jumlahLulus << " Mahasiswa" << endl;
    cout << "Tidak Lulus        : " << notLulus << " Mahasiswa";
    

    return 0;
}