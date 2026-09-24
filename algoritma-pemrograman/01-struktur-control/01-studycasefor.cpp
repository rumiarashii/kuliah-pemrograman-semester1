#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::size;
using std::string;
using std::getline;
using std::time_t;
using std::tm;      
using std::localtime;
using std::gmtime;
using std::ctime;
using std::asctime;
using std::time;

using namespace std;


void faktorial(){
    int bilangan;
    unsigned long long faktorial = 1;

    cout << "Masukkan bilangan  untuk dihitung faktorialnya (maks 256): "; cin >> bilangan;
    for (int i = 0; i < bilangan; i++){
        faktorial *= (bilangan - i);
    }

    cout << "Faktorial dari " << bilangan << "adalah: " << faktorial;
}

void totalSuhu(){
    /*      TOTAL PENGGUNAAN SUHU       */
    int totalSuhu = 0;
    int jumlahJam = 24;
    float averageSuhu = 0;


    for(int i = 1; i <= jumlahJam; i++){
        
        int suhu = 0;

        cout << "Masukkan Suhu badan jam ke - " << i << " : "; cin >> suhu;

        totalSuhu += suhu;
    }

    averageSuhu = (float)totalSuhu / jumlahJam;

    cout << "\n Rata rata suhu: " << averageSuhu;
}

void segitigaPascal(){
    int input = 5;

    for (int i = 0; i <= input; i++){
        int counter = 1;
        for (int j = 0; j <= i; j++){
            
            cout << counter;
            counter = counter * (i - j) / (j + 1);
            
        }

        cout << endl;
    }
}

void palindrom(){
    /*      PALINDROM     */
    string kata;
    cin.ignore();

    cout << "Masukan kata anda: "; getline(cin, kata);

    int Jumlahkata = kata.size();   
    int counter = 0;
    bool isPalindrom = true;

    for (int i = 0; i <= (Jumlahkata / 2); i++){
        if(kata[i] != kata[Jumlahkata - i - 1]){
            isPalindrom = false;
            break;
        }
    }    

    if (isPalindrom && Jumlahkata > 0){
        cout << "Kata " << kata << " adalah palindrom " << endl;
    } else {
        cout << "Kata " << kata << " bukan palindrom" << endl;
    }
}

void waktu(){
    
    /*      TANGGAL DAN WAKTU       */

    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Tahun  : " << 1900 + ltm -> tm_year << endl;
    cout << "Bulan  : " << 1 + ltm -> tm_mon << endl;
    cout << "Hari   : " << ltm -> tm_mday << endl;
    cout << "Waktu  : " << ltm -> tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;

    char* dt = ctime(&now);
    cout << "Tanggal dan waktu lokal adalah: " << dt << endl;

    cout << "\n\n";

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "Tanggal dan waktu UTC adalah: " << dt << endl;
}

int main(){

    int pilihan;
    bool isTrue = true;

    while (isTrue){
        cout << "-----STUDY CASE LATIHAN STRUKTUR CONTROL FOR-----" << endl;
        cout << "1. Latihan 1 (Total Suhu)" << endl;
        cout << "2. Latihan 2 (Segitiga Pascal)" << endl;
        cout << "3. Latihan 3 (Palindrom)" << endl;
        cout << "4. Latihan 4 (Tanggal dan waktu)" << endl;
        cout << "5. Latihan 5 (Faktorial)" << endl;
        cout << "6. Keluar program" << endl;
        cout << "Masukkan Pilihan anda (1-6): "; cin >> pilihan;

        switch (pilihan)
        {
        case 1: totalSuhu(); break;
        case 2: segitigaPascal(); break;
        case 3: palindrom(); break;
        case 4: waktu(); break;
        case 5: faktorial(); break;
        case 6: isTrue = false; break;    
        default: cout << "Pilihan tidak valid!" << endl; break;
        }
    }
    

    return 0;

}