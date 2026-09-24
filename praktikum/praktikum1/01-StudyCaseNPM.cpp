#include <iostream>
#include <string>
using namespace std;

int main() {
    int myNPM;
    int boyNPM;
    int girlNPM;

    int boySearch;
    int girlSearch;

    string myCall;
    string boyCall;
    string girlCall;

    cout << "===============ABSENSI===============" << endl;
    cout << "Nama Panggilan Saya            : "; cin >> myCall;
    cout << "3 NPM Akhir Saya               : "; cin >> myNPM;
    cout << "Nama Panggilan Teman Laki-Laki : "; cin >> boyCall;
    cout << "3 NPM Akhir Teman Laki-Laki    : "; cin >> boyNPM;
    cout << "Nama Panggilan teman Perempuan : "; cin >> girlCall;
    cout << "3 NPM Akhir Teman Perempuan    : "; cin >> girlNPM;

    boySearch = boyNPM + ((myNPM * 5) % 4);
    girlSearch = girlNPM + ((myNPM * 5) % 4);

    cout << "\n\n===============ABSENSI==============="<< endl;
    cout << "NPM Orang Lain (Pria)      : " << boySearch << endl;
    cout << "NPM Orang Lain (Perempuan) : " << girlSearch;


}