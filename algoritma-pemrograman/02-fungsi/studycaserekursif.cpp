#include <iostream>
#include <vector>

// waktu pengerjaan Selasa, 29 September 16:23 - 19:47 (commit and push to github at 23:51 WIB) 
using std::cout;
using std::endl;
using std::cin;
using std::vector;

// study case 1: menggunakan fungsi rekursif untuk menghitung faktorial dari suatu bilangan n
int bilanganFaktorial(int n){
    if (n <= 1){
        return 1;
    }

    return n * bilanganFaktorial(n-1);
}

// study case 2: menggunakan fungsi rekursif untuk menghitung bilangan fibonacci pada baris ke n
int bilanganFibonacci(int n){
    if (n == 1){
        return 0;
    }
    else if (n == 2){
        return 1;
    }
    else {
        return bilanganFibonacci(n - 1) + bilanganFibonacci(n - 2);
    }
}

// study case 3: menggunakan fungsi rekursif untuk mencari suatu bilangan yang dipangkatkan
int bilanganEksponensial(int pangkat, int n){
    if (pangkat == 0){
        return 1;
    } else {
        return n * bilanganEksponensial(pangkat-1, n);
    }
}

// study case 4: menggunakan fungsi rekursif dan array untuk menghitung total baris yang diinput user
int jumlahBaris (vector<int> arr, int n){
    if (n == 1){
        return arr[0];
    }

    return arr[n-1] + jumlahBaris(arr, n-1);
}

// study case 5: menggunakan fungsi rekursif dan array untuk melakukan binary search pada array menggunakan konsep kiri dan kanan
int binarySearch(vector<int> arr, int kiri, int kanan, int target){
    if (kiri > kanan){
        return -1;
    }

    int tengah = kiri + (kanan - kiri) / 2;

    if (arr[tengah] == target){
        return tengah;
    }

    if (target < arr[tengah]){
        return binarySearch(arr, kiri, tengah-1, target);
    } else {
        return binarySearch(arr, tengah + 1, kanan, target);
    }
}

void menu(bool &isTrue, int &pilihan){
    while(isTrue){
        cout << "\n\n===STUDY CASE REKURSIF===" << endl;
        cout << "1. Menghitung Faktorial" << endl;
        cout << "2. Nilai baris fibonacci" << endl;
        cout << "3. Bilangan Eksponen" << endl;
        cout << "4. Jumlah baris" << endl;
        cout << "5. Binary Search" << endl;
        cout << "Masukkan pilihan anda: "; cin >> pilihan;

        switch (pilihan)
        {
            case 1: {
                int n;
                cout << "Masukkan jumlah faktorial: "; cin >> n;
                cout << "Jumlah faktorial dari - " << n << " adalah: " << bilanganFaktorial(n);
                break;
            }
            case 2: {
                int n;
                cout << "Baris fibonacci bilangan ke berapa (1-256): "; cin >> n;
                cout << "Bilangan ke - " << n << " dari bilangan fibonacci adalah: " << bilanganFibonacci(n);
                break;
            }
            case 3: {
                int n, pangkat;
                cout << "Masukkan mau pangkat berapa: "; cin >> pangkat;
                cout << "Masukkan basisnya: "; cin >> n;
                cout << n << " pangkat " << pangkat << " adalah: " << bilanganEksponensial(pangkat, n);
                break;
            }
            case 4: {
                int n;
                cout << "Masukkan jumlah baris: "; cin >> n;
                vector<int> arr(n);
               
                for (int i = 0; i < n; i++){
                    cout << "Masukkan indeks ke - " << i << " : "; cin >> arr[i];
                }

                cout << "Hasil jumlah baris dengan n sebanyak - " << n << " adalah: " << jumlahBaris(arr, n);
                break;
            }
            case 5:{
                int n, target;
                cout << "Masukkan Jumlah baris: "; cin >> n;
                vector<int> arr(n);

                for (int i=0; i < n; i++){
                    cout << "(HARUS DIURUT KECIL KE BESAR) Masukkan indeks ke - " << i << " : "; cin >> arr[i];
                }

                cout << "Masukkan target pencarian: "; cin >> target;
                int hasil = binarySearch(arr, 0, n-1, target);

                if (hasil != -1){
                    cout << "Angka " << target << " ditemukan pada indeks ke - " << hasil << endl;
                } else {
                    cout << "Angka " << target << " tidak dapat ditemukan pada vector array" << endl;
                }
                break;
            }
            default:
                isTrue = false;
                break;


        }
    }
}

int main(){
    
    int pilihan;
    bool isTrue = true;

    menu(isTrue, pilihan);
    
}