#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct Rekap{
    string kategori;
    long long pendapatan;
};

int main(){
    int n;
    cin >> n;

    vector<Rekap> rekap(n); 

    int jumlahUnik = 0;

    for (int i = 0; i < n; i++){
        string kat;
        long long harga, jumlah;
        cin >> kat >> harga >> jumlah;

        int idxFound = -1;
        for (int i = 0; i < jumlahUnik; i++){
            if (rekap[i].kategori == kat){
                idxFound = i;
                break;
            }
        }

        if (idxFound != -1){
            rekap[idxFound].pendapatan += harga * jumlah;
        } else {
            rekap[jumlahUnik].kategori = kat;
            rekap[jumlahUnik].pendapatan = harga * jumlah;
            jumlahUnik++;
        }
    }

    // bubble sort
    for (int i = 0; i < jumlahUnik; i++){
        for (int j = 0; j < jumlahUnik - i - 1; j++){
            if (rekap[j].kategori > rekap[j + 1].kategori){
                Rekap temp = rekap[j];
                rekap[j] = rekap[j + 1];
                rekap[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < jumlahUnik; i++){
        cout << rekap[i].kategori << ' ' << rekap[i].pendapatan << '\n';
    }

    return 0;
}