#include <iostream>
#include <string>
using namespace std;

int a = 10; //Variabel global

/* -------- CAKUPAN VARIABEL ---------
    - Mendeklarasi variabel yang sama di scope sejajar(sub lokal) seperti int i di masing masing perulangan
    itu tidak saling ganggu, jadi setelah perulangan, variabel i akan dihapus dan jika ada
    perulangan lain menggunakan nama yang sama int i, itu akan menjadi sepenuhnya variabel baru

    - Mendeklarasi di sublokal di dalam scope yang lebih besar (Nested scope). ini disebut Variable shadowing
    jika membuat variabel i contohnya di scope global atau main, lalu membuat variabel i lagi didalam
    perulangan atau conditional (sublokal), variabel di scope luar tidak terhapus melainkan tesembunyi sementara 
    Ketika loop atau if selesai, variabel sublokal itu akan dihancurkan (menggunakan:: untuk mengakses variabel yang tersembunyi)
*/

int main(){
    /*  INPUT AND OUTPUT  */
    int umur; // variabel lokal
    int a = 50;
    int b = 20;
    double berat;

    // cout << "Masukkan Umur dan berat anda: ";
    // cin >> umur >> berat; //input chaining(menerima 2 input berurutan yang dipisah spasi/enter)

    // cout << "Umur: " << umur << " tahun. \nBerat: " << berat << " Kilogram " << endl;

    cout << ::a << "\n\n"; //menagakses variabel global even sudah dideclare lagi di scope main

    /*  INCREMENT AND DECREMENT (OPERATOR ARITMATIKA)   */
    //POSTFIX: nilai asli pada variabel akan dievaluasi dan digunakan, baru setelahnya di tambah/kurang 
    cout << "Nilai A awal           : " << a << endl;
    cout << "Hasil Postfix(a++)     : " << a++ << " <--- Masih mencetak nilai lama" << endl;
    cout << "Nilai A setelah postfix: " << a << endl;

    //PREFIX: Nilai ditambah/dikurang dulu sebelum dievaluasi di baris kode tersebut
    cout << "\nNilai B awal           : " << b << endl;
    cout << "Hasil Prefix(++b)      : " << ++b << " <--- Langsung mencetak nilai baru" << endl;
    cout << "Nilai b setelah Prefix : " << b << "\n\n" << endl;



    return 0;
}