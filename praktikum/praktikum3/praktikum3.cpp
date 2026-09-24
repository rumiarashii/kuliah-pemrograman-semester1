#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){  
    int choice = 0;

    do {
        cout << "============================" << endl;
        cout << "   ELEARNING BANGUN DATAR   " << endl;
        cout << "   Designer: Aliyah         " << endl;
        cout << "============================" << endl;

        cout << "1. Pengecekan Olimpiade" << endl;
        cout << "2. Persegi Bintang" << endl;
        cout << "3. Segitiga Bintang" << endl;
        cout << "4. Hentikan Program" << endl;
        
        cout << "-----------------------------" << endl;
        cout << "Pilih Menu (1-3): "; cin >> choice;

        if (choice == 1){
            int student;
            int nilaiA;
            int nilaiB;

            cout << "Masukkan Jumlah Murid: "; cin >> student;
            
            for (int i = 1; i <= student; i++){
                cout << "Murid ke - " << i << endl;
                cout << "Masukkan Nilai A: "; cin >> nilaiA;

                if (nilaiA == 100) {
                    cout << "Murid Ditemukan!";
                    break;
                } else if (nilaiA >= 80){
                    cout << "Masukkan Nilai B: "; cin >> nilaiB;

                    if (nilaiB > 90){
                        cout << "Murid Ditemukan!";
                        break;
                    } else {
                        "Murid belum memenuhi persyratan";
                    }
                } else{
                    cout << "Tidak memenuhi";
                    // continue;
                }

            }

        } else if (choice == 2){
            int baris;
            int kolom;

            cout << "Masukkan Jumlah Baris: "; cin >> baris;
            cout << "Masukkan Jumlah Kolom: "; cin >> kolom;

            for (int i = 1; i < baris; i++){
                for (int j = 1; j < kolom; j++){
                    cout << "*";
                }

                cout << "*" << endl;
            }

        } else if (choice == 3) {
            int tinggiSegitiga;

            cout << "Masukkan Tinggi Segitiga: "; cin >> tinggiSegitiga;

            for (int i = 1; i <= tinggiSegitiga; i++){
                for (int j = 1; j <= (tinggiSegitiga-i); j++){
                    cout << " ";
                }

                for (int k = 1; k <= i; k++){
                    cout << "*";
                }

                cout << endl;
            }

        } else {
            cout << "Sampai Berjumpa Rumi!";
        }

    } while (choice != 4);

    
    


    return 0;
}