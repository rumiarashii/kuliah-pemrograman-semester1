#include <iostream>
#include <string>
#include <cctype>


using std::cout;
using std::cin;
using std::endl;
using std::tolower;

int main(){

    char golongan;
    cout << "Masukkan Golongan anda: "; cin >> golongan;

    golongan = _tolower(golongan);

    switch (golongan)
    {
    case 'a': cout << "Gaji: Rp5.000.000" << endl; break;
    case 'b': cout << "Gaji: Rp7.500.000" << endl; break;
    case 'c': cout << "Gaji: Rp10.000.000" << endl; break;
    case 'd': cout << "Gaji: Rp12.500.000" << endl; break;
    case 'e': cout << "Gaji: Rp15.000.000" << endl; break;
    
    default:
        cout << "Golongan tidak memenuhi!";
        break;
    }

    return 0;
}