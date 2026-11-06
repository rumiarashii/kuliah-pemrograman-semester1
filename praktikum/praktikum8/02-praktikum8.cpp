#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

void print_data(){ // fungsi membaca dan print terminal dari data .txt
    ifstream data("dataMahasiswa.txt");

    if (!data){ //cek jika ada filenya, jika tidak ada maka fungsi berhenti
        cerr << "Error: Data tidak ditemukan ataupun tidak bisa diakses";
        return;
    }

    int npm;
    string nama;

    cout << "=== Data Mahasiswa ===\n"; 
    while (data >> npm >> nama){ // membaca 2 kata dan dimasukkan ke variabel npm dan nama
        cout << npm << " " << nama << '\n';
    }

    data.close();
}

// fungsi untuk menginput data baru dan memasukkannya ke file baru
void new_data(){
    char pil;
    cout << "\nInput data baru? (Y/N): "; cin >> pil; 

    

    if (pil == 'Y'){
        int newNpm;
        string newName;

        cout << "Masukkan NPM   : "; cin >> newNpm;
        cout << "Masukkan Nama  : "; cin >> newName;

        ofstream out_file;
        out_file.open("dataMahasiswa.txt", ios::app); // menggunakan ios::app agar tidak menimpa dan replcae seluruh isi file, hanya menambahkan dibawahnya

        if (out_file.is_open()){
            out_file << '\n' << newNpm << " " << newName;

            out_file.close();
        } else {
            cerr << "Error: file tidak bisa diakses atau tidak ada";
            return;
        }

        
    } else {
        return;
    }

    
}

int main(){
    print_data(); //pemanggilan fungsi
    new_data();
    return 0;
}