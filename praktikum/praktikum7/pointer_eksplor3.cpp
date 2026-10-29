#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan Jumlah Elemen: "; cin >> n;

    int biasa[100]; // menggunakan fixed element karena disimpan di stack (kita serahkan ke computer), stack juga memiliki batasan dalam jumlah elemen
    int *dinamis = new int[n]; // pesan array sejumlah n ke komputer dan disimpan di heap (dan programmer bisa memesan sesukanya)

    // perulangan untuk array biasa, jika out of bounds. contoh n 150, maka sudah pasti akan random_values atau data orang lain
    float total = 0;
    for (int i = 0; i < n; i++){
        cout << "Masukkan angka: "; cin >> biasa[i];
        total += biasa[i];
    }

    cout << "\n";

    // perulangan untuk array 
    float total_dinamis = 0;
    for (int i = 0; i < n; i++){
        cout << "Masukkan angka: "; cin >> *(dinamis + i); // ini adalah asal dari dinamis[i]. dinamis[i] adalah syntatic sugar dari cpp untuk menulis *(dinamis + i)

        total_dinamis += dinamis[i];
    }


    cout << "Rata rata biasa: " << total / n << '\n';
    cout << "Rata rata dinamis: " << total_dinamis / n << "\n";

    delete[] dinamis; // berbeda dengan stack yang bisa hancur otomatis. heap tidak akan pernah kembali ke sistem kecuali kita delete (mencegah memory_leak)
    dinamis = nullptr; //perintah delete tidak menghancurkan alamat pointer, hanya isinya saja. Jika tidak sengaja mengakses maka bisa terjadi crash (menghindari Dangling Pointer)
    
    return 0;
}