#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

// fungsi membaca nama, npm, dan nilai dari data1
void read_data(){
    ifstream file_1("data.txt"); // membuka ifstream

    if (!file_1){ //melakukan pengecekan
        cerr << "Error: file tidak ditemukan" << endl;
        return; // return atau membatalkan fungsi
    }

    string nama;
    int npm;
    int nilai;

    while (file_1 >> nama >> npm >> nilai){ // mengambil 3 kata dan dimasukkan
        cout << "Nama    : " << nama << endl;
        cout << "NPM     : " << npm << endl;
        cout << "Nilai   : " << nilai << endl;
    }

    file_1.close(); // menutup file
}

// menghitung whitespace di data1
void whitespace_count(){
    ifstream file_1("data.txt"); 
    char ch;
    int count = 0;

    if (!file_1){
        cerr << "Error: file tidak ditemukan/tidak diakses";
        return;
    }

    while(file_1.get(ch)){ //melakukan pengecekan satu-satu, char demi char termasuk whitespace
        if (isspace(ch)){ // fungsi isspace untuk melihat whitespace
            cout << "whitespace "; 
        }
    }

    file_1.close();
}

// mengecek fungsi mutu dari file 2
void fungsiMutu(){
    ifstream file_2("data2.txt"); 
    char mutu;

    if (!file_2){
        cerr << "Error: file tidak ditemukan/diakses";
        return;
    }

    while (file_2 >> mutu){
        cout << "\nHuruf Mutu: " << mutu << endl;
    }

    file_2.close();
}

// fungsi untuk mengambil description
void description(){
    ifstream file_3("data3.txt");
    string desc;

    if (!file_3){
        cout << "Error: file tidak ditemukan/diakses";
        return;
    }

    cout << "Deskripsi: \n";
    while (getline(file_3, desc)){ //menggunakan getline dan terhenti jika ada \n baru
        cout << desc << endl;
    }
}

int main(){
    read_data();
    whitespace_count();
    fungsiMutu();
    description();
    return 0;
}