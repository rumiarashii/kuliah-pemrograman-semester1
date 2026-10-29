#include <iostream>
using namespace std;

int main(){
    int angka = 10;
    int *ptr = &angka;
    int **ptr2 = &ptr;
    // & itu adala reference, dari variabel menuju alamat
    // * dereference, dari alamat menuju nilai

    cout << ptr << endl; //alamat angka
    cout << *ptr << endl; //nilai dari suatu alamat
    cout << &ptr << endl; //alamat ptr, dimana lokasi kotak variabel ini
    cout << *&ptr << endl; //sama saja dengan  ptr
    cout << ptr2 << endl; //mencetak alamat dari ptr
    cout << *ptr2 << endl; //mencetak nilai dari variabel ptr2, yaitu  kotak dari alamat
    cout << **ptr2 << endl; // 2 kali masuk, jadi nilainya adalah 10

    cout << &**&*&*ptr2 << endl; //sama saja kayak cout << *ptr 2 -> ptr
    return 0;
}