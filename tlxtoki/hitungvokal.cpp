#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    string s;
    cin >> s;

    int banyaknya_vokal = 0;

    for (char c : s){
        if (c == 'a' ||  c == 'i' || c == 'u' || c == 'e' || c == 'o'){
            banyaknya_vokal++;
        }
    }

    cout << "banyaknya vokal: " << banyaknya_vokal << endl;

    //hitung_vokal.exe < masukan.txt > keluaran.txt (membaca masukan dari masukan.txt dan mencetak keluaran ke keluaran.txt)

    return 0;
}