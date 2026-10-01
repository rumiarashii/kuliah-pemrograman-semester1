#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/* Soal Kuis Praktikum: Pencetak Jam Pasir & Segitiga Belah Ketupat 
(Hourglass & Diamond Pattern)Buatlah sebuah program C++ modular yang menerima input 
sebuah bilangan bulat ganjil $N$ (misalnya: $N = 5, 7, 9$) dan sebuah 
pilihan menu pola dari pengguna.*/

void inputN(int &n){
    while (true){
        cout << "\nMasukkan nilai N: "; cin >> n;

        if (!(n < 3 || n % 2 == 0)){
           break;
        } 

        cout << "Nilai Input salah!" << endl;
    }
}

void jamPasir(int n){
    int counter = 0;
    int counter2 = 0;

    for (int i = 1; i <= n; i++){
        if (!(i % 2 == 0)){
            counter++;

            for (int j = 1; j < (i-counter+1); j++){
                cout << " ";
            }

            for (int k = i; k <= n; k++){
                cout << "*";
            }   

            cout << endl;
        }
    }

    for (int i = 1; i <= n; i++){
        
        if (!(i == 1 || i % 2 == 0)){
            counter2++;
   

            for (int j = 1; j <= counter - counter2 - 1; j++){
                cout << " ";
            }


            for (int k = 1; k <= (2 * counter2 + 1); k++){
                cout << "*";
            }

            cout << endl;
        }
    }
}

void belahKetupat(int n){
    int counter = 0;
    int counter2 = 0;

    
    for (int i = 1; i <= n; i++){
        
        if (!(i % 2 == 0)){
            counter++;

            for (int j = counter+1; j <= (n/2 + 1); j++){
                cout << " ";
            }

            for (int k = 1; k <= i; k++){
                cout << "*";
            }

            cout << endl;
        }
    }

   
    for (int i = 1; i <= n; i++){
        if (!(i == 1 || i % 2 == 0)){
            counter2++;
            for (int j = 1; j <= (i-counter2-1); j++){
                cout << " ";
            }

            for (int k = i; k <= n; k++){
                cout << "*";
            }

            cout << endl;
        }
    }
}

void latihan1(){
    int n;
    int pilihan;

    cout << "\n\n===LATIHAN 1===" << endl;
    cout << "1. Cetak Jam Pasir" << endl;
    cout << "2. Cetak belah ketupat" << endl;
    cout << "Masukkan Pilihan anda: "; cin >> pilihan;
    inputN(n);

    switch (pilihan)
    {
    case 1:
        jamPasir(n);
        break;
    case 2:
        belahKetupat(n);
        break;
    default:
        cout << "MASUKKAN ANDA SALAH!" << endl;
        break;
    }
}

/*  Latihan 2: Kabisat dan non kabisat*/

void inputTahun(int &tahun){
    cout << "Input tahun anda: "; cin >> tahun;
}

bool cekKabisat(int tahun){
    if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0)){
        return true;
    } else {
        return false;
    }
}

void latihan2(){
    int tahun;

    inputTahun(tahun);

    if (cekKabisat(tahun)){
        cout << "Ada 366 hari pada tahun " << tahun << endl;
    } else {
        cout << "Ada 365 hari pada tahun " << tahun << endl;
    }
}

/* Latihan 3: Astersik ganjil*/
void asterisk(){
    int n;
    cout << "Masukkan nilai N: "; cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= (2 * i - 1); j++){
            cout << "* ";
        }

        cout << endl;
    }
}


/*  Latihan 3: Menghitung baris dari n*/
int hitungBaris(int n){
    if (n == 1) return 1;

   return n + hitungBaris(n-1);
}

void jumlahBaris(){
    int n;
    cout << "Masukkan nilai n: "; cin >> n;

    cout << "Nilai anda adalah: " << hitungBaris(n);
}

/*  Latihan 4: Diskon   */
void discountDiv(int totalBelanja, bool isMember, double &diskon){
    if (isMember){
        if (totalBelanja >= 200000){
            diskon = totalBelanja * 0.2;
        } else {
            diskon =  totalBelanja * 0.1;
        }
    } else {
        if (totalBelanja >= 200000){
            diskon = totalBelanja * 0.05;
        } else {
            diskon = totalBelanja * 0;
        }
    }
}

int hitungTotal(int totalBelanja, double diskon){
    return totalBelanja - diskon;
}

void discountMember(){
    double totalBelanja;
    bool isMember;
    double diskon;
    double totalAkhir;

    cout << "Input total belanja: "; cin >> totalBelanja;
    cout << "Input member atau bukan (1 member/ 0 bukan member): "; cin >> isMember;

    discountDiv(totalBelanja, isMember, diskon);
    totalAkhir = hitungTotal(totalBelanja, diskon);
    
    cout << "Diskon: Rp " << diskon << endl;
    cout << "Total Akhir: Rp " << totalAkhir << endl;
}

/*  Latihan 5: perulangan bersarang*/
void cetakPiramidaSelangSeling(int n){
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            cout << " ";
        }

        if (!(i % 2 == 0)){
            for (int k = 1; k <= i; k++){
                cout << "* ";
            }
        } else {
            for (int l = 1; l <= i; l++){
                cout << "# ";
            }
        }

        cout << endl;
    }
}

void perulanganBersarang(){
    int n;
    while(true){
        cout << "Masukkan nilai n: "; cin >> n;

        if ((n < 1)){
            cout << "N Tidak memenuhi" << endl;
        } else {
            break;
        }
    }

    cetakPiramidaSelangSeling(n);
    
}

/*  Latihan 6: Rekursif*/

int fibonacci(int n){
    if (n == 1){
        return 0;
    } else if (n == 2){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int pangkat(int basis, int eksponen){
    if (eksponen == 0){
        return 1;
    }

    return basis * pangkat(basis, eksponen-1);
}

void fungsiRekursif(){
    int pilihan;
    cout << "1. Rekursif Fibonacci" << endl;
    cout << "2. Rekursif Pangkat" << endl;
    cout << "Masukkan pilihan anda: "; cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        int n;
        cout << "Masukkan bilangan n: "; cin >> n;
        cout << "Nilai fibonacci index ke - " << n << " : " << fibonacci(n) << endl;
        break;
    case 2:
        int basis, eksponen;
        cout << "Masukkan basis: "; cin >> basis;
        cout << "Masukkan eksponen: "; cin >> eksponen;
        cout << "Nilai basis " << basis << " dengan eksponen " << eksponen << pangkat(basis, eksponen) << endl;
    default:
        cout << "Input tidak sesuai";
        break;
    }
}


int main(){
    fungsiRekursif();
}