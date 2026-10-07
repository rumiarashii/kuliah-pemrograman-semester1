#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

typedef int Mahasiswa[50];

void inputMahasiswa(int &n){
    do{
        cout << "Input Jumlah Mahasiswa: "; cin >> n;
        if (n <= 0 || n > 50){
            cout << "Jumlah Mahasiswa tidak memenuhi!" << endl;
        }
    } while (n <= 0 || n > 50);
   
}

void inputNilai(Mahasiswa& mahasiswa, int n){
    cout << "Masukkan nilai mahasiswa: " << endl;
    for (int i = 0; i < n; i++){
        cout << "Masukkan nilai mahasiswa ke - " << i + 1 << " : "; cin >> mahasiswa[i];
    }
}

float meanNilai(Mahasiswa mahasiswa, int n){
    int jumlah = 0;
    for (int i = 0; i < n; i++){
        jumlah += mahasiswa[i];
    }

    return (float)jumlah/n;
}

int nilaiMaks(Mahasiswa mahasiswa, int n, int& mahasiswaTertinggi){
    int maksimum = mahasiswa[0];

    for (int i = 1; i < n; i++){
        if (mahasiswa[i] > maksimum){
            maksimum = mahasiswa[i];
            mahasiswaTertinggi = i + 1;
        }
    }

    return maksimum;
}

int nilaiMin(Mahasiswa mahasiswa, int n, int& mahasiswaTerendah){
    int minimum = mahasiswa[0];

    for (int i = 1; i < n; i++){
        if (mahasiswa[i] < minimum){
            minimum = mahasiswa[i];
            mahasiswaTerendah = i + 1;
        }
    }

    return minimum;
}

void cetakHasil(Mahasiswa mahasiswa, int n, int mahasiswaTerendah, int mahasiswaTertinggi){
    cout << "LAPORAN NILAI MAHASISWA KELAS B" << endl;
    cout << "===============================" << endl;

    for (int i = 0; i < n; i++){
        cout << "Nilai mahasiswa ke - " << i + 1 << " : " << mahasiswa[i] << endl;
    }

    cout << "Rata rata nilai: " << fixed << setprecision(2) << (mahasiswa, n) << endl;
    cout << "Nilai Maksimum: " << nilaiMaks(mahasiswa, n, mahasiswaTertinggi) << " ( Mahasiswa " << mahasiswaTertinggi << ") " << endl;
    cout << "Nilai minimum : " << nilaiMin(mahasiswa, n, mahasiswaTerendah) << " ( Mahasiswa " << mahasiswaTerendah << ") " << endl;

}



int main(){

    Mahasiswa mahasiswa;
    int n;
    int mahasiswaTerendah = 1; //inisialisasi sebagai terendah karena menghindari n = 1
    int mahasiswaTertinggi = 1;
    inputMahasiswa(n);

    inputNilai(mahasiswa, n);

    cetakHasil(mahasiswa, n, mahasiswaTerendah, mahasiswaTertinggi);
   

    return 0;
}