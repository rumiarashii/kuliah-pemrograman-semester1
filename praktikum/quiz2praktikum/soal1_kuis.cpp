/*
Nama Lengkap            : Muhammad Celaleddin Rumi Arashi
Nomor Pokok Mahasiswa   : 140810260028
Kelas                   : Kelas B
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// di IDE saya banyak error pada .size(), tetapi setelah di run ternyata berhasil

void inputUser(){
    string tempName;
    string tempReal;
    int level;
    string password;

    cout << "Masukkan Nama game: "; cin >> tempName;
    cout << "Masukkan nama asli: "; cin >> tempReal;
    cout << "Level             : "; cin >> level;
    cout << "Password          : "; cin >> password;

    int h = tempName.size();

    for (int i = 0; i < h; i++){
        if (tempName[i] >= 'a' && tempName[i] <= 'z'){
            tempName[i] = tempName[i] - 32;
        }
    }

    int j = tempReal.size();
    for (int i = 0; i < j; i++){
        if (tempReal[i] >= 'a' && tempReal[i] <= 'z'){
            tempReal[i] = tempReal[i] - 32;
        }
    }

    int k = password.size();
    for (int i = 0; i < k; i++){
        if (password[i] >= 'a' && password[i] <= 'z'){
            password[i] = password[i] - 32;
        }
    }

    ofstream  add_file;
    add_file.open("file_save.txt", ios::app);

    if (add_file.is_open()){
        add_file << '\n' << tempName << " " << tempReal << " " << level << " " << password;
    } else {
        return;
    }

    add_file.close();

}

int main(){

    ifstream in_file;
    in_file.open("file_save.txt");


    if (!in_file){
        cerr << "Error";
        return -1;
    }

    char ch;
    string str;
    string temp;
    int counter = 0;

    while (in_file >> temp){ // penghapusan dari kata yang tidak diinginkan, hanya ada 4 kata dalam format, jadi yang kelima sudah tentu noise

        if (counter >= 4){
            break;
        }
        for (char &c : temp){
            if (c >= 'a' && c <= 'z'){
                c = c - 32;
            }

            str = str + c;
        }

        if (counter < 3){
            str += " ";
        }

        counter++;
    }

    

    in_file.close();

    ofstream out_file;
    out_file.open("file_save.txt");

    if (out_file.is_open()){
        out_file << str;
    }

    out_file.close();
    cout << "BERHASIL REWRITE ISI FILE" << endl;

    while (true){
        int pilihan;
        cout << "Mau input atau tidak (0/1) : "; cin >> pilihan;

        if (pilihan == 0){
            break;
        } else {
            inputUser();
            cout << "Berhasil input" << endl;
        }
    }

    return 0;
}