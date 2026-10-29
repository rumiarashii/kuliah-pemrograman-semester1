#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Produk{
    string kode;
    long long stok;
};

int main(){
    int n;
    cin >> n;

    Produk produk[100];

    for (int i = 0; i < n; i++){
        cin >> produk[i].kode >> produk[i].stok;
    }

    int q;
    cin >> q;
    int transaksiTolak = 0;
    while(q--){
        string perintah;
        string cariKode;
        long long tambahStok;
        cin >> perintah >> cariKode >> tambahStok;

        int idxFind = -1;

        for (int i = 0; i < n; i++){
            if (produk[i].kode == cariKode){
                idxFind = i;
                break;
            }
        }

        if (idxFind == -1){
            transaksiTolak++;
        } else {
            if (perintah == "KELUAR"){
                if (produk[idxFind].stok >= tambahStok){
                    produk[idxFind].stok -= tambahStok;
                } else {
                    transaksiTolak++;
                }
            } else if (perintah == "MASUK"){
                produk[idxFind].stok += tambahStok;
            }
        }
    }

    cout << transaksiTolak << '\n';
    for (int i = 0; i < n; i++){
        cout << produk[i].kode << ' ' << produk[i].stok << '\n';
    }

    return 0;
}