#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void inputMenit(int &menit){
    cout << "Masukkan menit: "; cin >> menit;
}

void tarifParkir(int menit, int &tarif, int &jam){
    
    jam = (menit/60);
    
    if (jam >= 1){
        tarif += 5000;

        if (jam <= 24){
            tarif += (jam - 1) * 2000;
        } else {
            tarif += 23 * 2000;
            tarif += (jam - 24) * 4000;
        }

    }
    

    
}

int main(){
    int menit = 0;
    int jam = 0;
    int tarif = 0;

    inputMenit(menit);
    tarifParkir(menit, tarif, jam);

    cout << "Tarif anda: " << tarif << endl;

    
    
    return 0;
}