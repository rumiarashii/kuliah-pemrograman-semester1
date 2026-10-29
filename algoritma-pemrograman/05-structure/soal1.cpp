#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Mahasiswa {
    string nama;
    int tugas;
    int uts;
    int uas;
    double nilaiAkhir;
    int skor;
};

typedef Mahasiswa Array[100];

void tukar(Mahasiswa &a, Mahasiswa &b){
    Mahasiswa temp = a;
    a = b;
    b = temp;
}

int main(){

    int n;
    cin >> n;  

    Array mhs;

    for (int i = 0; i < n; i++){
        cin >> mhs[i].nama >> mhs[i].tugas >> mhs[i].uts >> mhs[i].uas;

        mhs[i].nilaiAkhir = (0.2 * mhs[i].tugas) + (0.3 * mhs[i].uts) + (0.5 * mhs[i].uas);
        mhs[i].skor = (2 * mhs[i].tugas) + (3 * mhs[i].uts) + (5 * mhs[i].uas);
    }

    // bubble sort
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n - i - 1; j++){
            bool harusTukar = false;
            if (mhs[j].skor < mhs[j + 1].skor){
                harusTukar = true;
            } else if (mhs[j].skor == mhs[j + 1].skor){
                if (mhs[j].uas < mhs[j + 1].uas){
                    harusTukar = true;
                } else if (mhs[j].uas == mhs[j + 1].uas){
                    if (mhs[j].nama > mhs[j + 1].nama) harusTukar = true;
                }
            }

            if (harusTukar) tukar(mhs[j], mhs[j + 1]);
        }
    }

    cout << mhs[0].nama << " " << fixed << setprecision(2) << mhs[0].nilaiAkhir;
    



    return 0;
}