#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Rapat{
    string kode;
    int mulai, selesai;
};

int main(){
    
    int n;
    cin >> n;
    vector<Rapat> daftarRapat(n);

    for (int i = 0; i < n; i++){
        cin >> daftarRapat[i].kode >> daftarRapat[i].mulai >> daftarRapat[i].selesai;
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            bool harusTukar = false;

            if (daftarRapat[j].selesai > daftarRapat[j + 1].selesai) {
                harusTukar = true;
            } else if (daftarRapat[j].selesai == daftarRapat[j + 1].selesai) {
                if (daftarRapat[j].mulai > daftarRapat[j + 1].mulai) {
                    harusTukar = true;
                } else if (daftarRapat[j].mulai == daftarRapat[j + 1].mulai) {
                    if (daftarRapat[j].kode > daftarRapat[j + 1].kode) {
                        harusTukar = true;
                    }
                }
            }

            if (harusTukar){
                Rapat temp = daftarRapat[j];
                daftarRapat[j] = daftarRapat[j  + 1];
                daftarRapat[j + 1] = temp;
            }
        }
    }

    vector<Rapat> terpilih;
    if (n > 0){
        terpilih.push_back(daftarRapat[0]);
        int waktuSelesaiTerakhir = daftarRapat[0].selesai;

        for (int i = 1; i < n; i++){
            if (daftarRapat[i].mulai >= waktuSelesaiTerakhir){
                terpilih.push_back(daftarRapat[i]);
                waktuSelesaiTerakhir = daftarRapat[i].selesai;
            }
        }
    }

    cout << terpilih.size() << '\n';
    for (int i = 0; i < terpilih.size(); i++){
        cout << terpilih[i].kode << ' ';
    }

    return 0;
}