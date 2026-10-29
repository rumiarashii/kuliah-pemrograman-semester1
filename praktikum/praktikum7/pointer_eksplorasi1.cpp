#include <iostream>
using namespace std;

int main(){
    int a = 10; 
    bool b = true;
    double c = 3.14;

    // mengambil dan memasukkannya ke variabel pointer
    int *pA = &a;
    bool *pB = &b;
    double *pC = &c;

    cout << pA << '\n'; 
    cout << pB << '\n';
    cout << pC << '\n';

    // pengetesan dari size byte dari masing masing tipe data yang dites
    cout << "SIZE OF\n";
    cout << sizeof(int) << " " << sizeof(bool) << " " << sizeof(double) << '\n';

    pA++;
    pB++;
    pC++;

    //pada dasarnya operasi increment pada pointer akan memindahkan alamat memori sebesar ukuran tipe data tersebut
    cout << "\nPOST INCREMENT\n";
    cout << pA << '\n'; //bertambah 4 byte
    cout << pB << '\n'; //bertambah 1 byte
    cout << pC << '\n'; //bertambah 8 byte


    int arr = {10, 20, 30};


    return 0;
}