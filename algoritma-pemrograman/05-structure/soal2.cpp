#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Produk{
    string kode;
    long long harga, stok;
    long long persediaan;
};

void tukar(Produk &a, Produk &b){
    Produk temp = a;
    a = b;
    b = temp;
}


int main(){
    Produk produk[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> produk[i].kode >> produk[i].harga >> produk[i].stok;

        produk[i].persediaan = produk[i].harga * produk[i].stok; 
    }

    // bubble sorting
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            bool isTukar = false;
            if (produk[j].persediaan < produk[j + 1].persediaan){
                isTukar = true;
            } else if (produk[j].persediaan == produk[j + 1].persediaan){
                if (produk[j].harga > produk[j + 1].harga){
                    isTukar = true;
                } else if (produk[j].harga == produk[j + 1].harga){
                    if (produk[j].kode > produk[j + 1].kode){
                        isTukar = true;
                    }
                }
            }

            if (isTukar) tukar(produk[j], produk[j + 1]);
        }
    }

    //print
    for (int i = 0; i < n; i++){
        cout << produk[i].kode << ' ' << produk[i].persediaan << '\n';
    }

    return 0;
}