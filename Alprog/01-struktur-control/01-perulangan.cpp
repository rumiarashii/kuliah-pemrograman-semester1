#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    
    // unsigned int idx=1;
    // while(idx <= 4){
    //     cout << idx * 2 << " ";
    //     idx++;
    // }

    // cout << "\n";

    for (unsigned int bil=1;bil <= 9; bil++){
        if (bil % 2 == 0) continue; // hanya satu baris tidak apa apa pakai kurung kurawal
        cout << bil << " ";
    }


    // Algoritma half-even
    float bungaHarian = 3.5;

    if (int(bungaHarian) % 2 == 0)
        cout << bungaHarian - 0.5;
    else cout << bungaHarian + 0.5;

    cout << "\n";

    int baris;
    cout << "Jumlah Baris: ";  cin >> baris;
    // nested loop
    for (int i = 0; i <= baris; i++){
        for (int j = 0; j < i; j++){
            cout << "* ";
        }

        cout << endl;
    }

    cout << "\n";

    int loopRun = 0;

    for (int i = 1; i <= 5; i++){
        loopRun++;
        cout << "Loop Run: " << loopRun << endl;
        i++;
        cout << "i: " << i << "\n\n";
    }

    

    //diamond

    return 0;
}